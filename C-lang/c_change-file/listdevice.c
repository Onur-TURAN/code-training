#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define MAX_DEVICES 1000

int main() {
    // Tarama yapılacak IP adres aralığı
    const char *ip_range = "192.168";

    // Socket oluşturma
    int sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock == -1) {
        perror("Socket oluşturulamadı");
        exit(1);
    }

    // IP adreslerini ve portları tara
    struct sockaddr_in server;
    server.sin_family = AF_INET;

    char devices[MAX_DEVICES][16];
    int device_count = 0;

    for (int i = 0; i <= 255; ++i) {
        char ip_address[16];
        sprintf(ip_address, "%s.%d", ip_range, i);

        inet_pton(AF_INET, ip_address, &(server.sin_addr));

        for (int port = 1; port <= 65535; ++port) {
            for (int protocol = 0; protocol < 2; ++protocol) {
                server.sin_port = htons(port);

                if (protocol == 0) {
                    if (connect(sock, (struct sockaddr *)&server, sizeof(server)) >= 0) {
                        strncpy(devices[device_count], ip_address, sizeof(devices[device_count]));
                        device_count++;
                        break;
                    }
                } else {
                    int udp_sock = socket(AF_INET, SOCK_DGRAM, 0);
                    if (udp_sock == -1) {
                        perror("UDP Socket oluşturulamadı");
                        exit(1);
                    }

                    if (connect(udp_sock, (struct sockaddr *)&server, sizeof(server)) >= 0) {
                        strncpy(devices[device_count], ip_address, sizeof(devices[device_count]));
                        device_count++;
                        break;
                    }

                    close(udp_sock);
                }
            }
        }
    }

    // Socket kapatma
    close(sock);

    // Sonuçları listdevices.txt dosyasına yazdırma
    FILE *output_file = fopen("listdevices.txt", "w");
    if (output_file == NULL) {
        perror("Dosya oluşturulamadı");
        exit(1);
    }

    for (int i = 0; i < device_count; i++) {
        fprintf(output_file, "%s\n", devices[i]);
    }

    fclose(output_file);

    return 0;
}

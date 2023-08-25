#include<stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1000

void replace_ipv4_addresses(const char *filename, const char *replacement) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Dosya açılamadı.\n");
        return;
    }

    char line[MAX_LINE_LENGTH];
    char new_lines[MAX_LINE_LENGTH][MAX_LINE_LENGTH];
    int line_count = 0;

    while (fgets(line, MAX_LINE_LENGTH, file)) {
        if (line[0] != '#') {  // Comment satırlarını hariç tut
            // IPv4 adreslerini yakala ve değiştir
            char *ipv4_address = strtok(line, " \t\n");
            while (ipv4_address != NULL) {
                if (strchr(ipv4_address, '.') != NULL) {
                    strcpy(ipv4_address, replacement);
                }
                ipv4_address = strtok(NULL, " \t\n");
            }
        }
        strcpy(new_lines[line_count], line);
        line_count++;
    }

    fclose(file);

    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Dosya açılamadı.\n");
        return;
    }

    for (int i = 0; i < line_count; i++) {
        fputs(new_lines[i], file);
    }

    fclose(file);
}

int main() {
    const char *filename = "metin_dosyasi.txt";  // İşlem yapılacak dosya adı
    const char *replacement = "x.x.x.x";  // Değiştirilecek adresin yerine gelecek değer

    replace_ipv4_addresses(filename, replacement);

    return 0;
}

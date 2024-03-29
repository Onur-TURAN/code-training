#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void updateScript(const char*ip_address) {
	FILE *script_file = fopen("ss.sh", "r+");
	if(script_file == NULL) {
		perror("ss.sh betiği açılamadı");
		exit(1);
	}

	const char *target_line = "TARGET_IP=";
	const size_t target_line_len = strlen(target_line);
	char line[256];
	char updated_linei[256];

	while (fgets(line, sizeof(line), script_file)) {
		if (strncmp(line, target_line, target_line_len) == 0) {
			snprintf(updated_line, sizeof(updated_line), "%s%s\n", target_line, ip_address);
			fseek(script_file, -strlen(line), SEEK_CUR);
			fputs(updated_line, script_file);
			break;
		}
	}
	fclose(script_file);
}

int main() {
	FILE *device_file = fopen("listdevice.txt", "r");
	if(device_file == NULL) {
		perror("listdevice.txt dosyası açılmadı");
		exit(1);
	}

	char ip_address[16];
	while (fgets(ip_address, sizeof(ip_address), device_file)) {
		ip_address[strcspn(ip__address, "\n")] = '\0';
		updateScript(ip_address);

		//ss.sh betiğini çalıştırma
		system("./ss.sh");
	}
	fclose(device_file);
	return 0;
}

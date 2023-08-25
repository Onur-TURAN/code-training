#include <stdio.h>
#include <time.h>

int main() {
    // Referans zamanını al
    time_t reference_time = time(NULL);

    // Sistem zamanını al
    time_t system_time = time(NULL);

    // Referans zamanı ile sistem zamanını karşılaştır
    if (system_time - reference_time < 1) {
        printf("Bu bir gerçek makinede çalışıyor olabilir.\n");
    } else {
        printf("Bu bir sanal makinede çalışıyor olabilir.\n");
    }

    return 0;
}

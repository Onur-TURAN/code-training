#include <stdio.h>

// CPUID talimatını uygulayan yardımcı işlev
void cpuid(int code, unsigned int* a, unsigned int* b, unsigned int* c, unsigned int* d) {
    asm volatile("cpuid"
                 : "=a" (*a), "=b" (*b), "=c" (*c), "=d" (*d)
                 : "a" (code));
}

int main() {
    unsigned int eax, ebx, ecx, edx;
    int isVirtualMachine = 0;

    // CPUID talimatı kullanarak sanal makine bayrağını kontrol et
    cpuid(0x1, &eax, &ebx, &ecx, &edx);
    if ((ecx & (1 << 31)) != 0) {
        isVirtualMachine = 1;
    }

    if (isVirtualMachine) {
        printf("Bu bir sanal makinede çalışıyor olabilir.\n");
    } else {
        printf("Bu bir gerçek makinede çalışıyor olabilir.\n");
    }

    return 0;
}

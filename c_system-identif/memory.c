#include <stdio.h>

int main() {
    // Bellekte belli bir adrese bir değer atayarak deneme yapabiliriz
    int test_value = 0x12345678;
    int* test_pointer = &test_value;

    // Bellekteki değeri kontrol ederek sanal makine olup olmadığını tahmin edebiliriz
    if (*test_pointer == 0x12345678) {
        printf("Bu bir gerçek makinede çalışıyor olabilir.\n");
    } else {
        printf("Bu bir sanal makinede çalışıyor olabilir.\n");
    }

    return 0;
}

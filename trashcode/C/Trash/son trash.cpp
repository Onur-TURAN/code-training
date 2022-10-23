#include <stdio.h>

int sonasal(int n);
int main() {
    int i, end = 5;

    for (i = 1000; i >= 1; i--) {
        if (sonasal(i) == 1) {
            printf("%d ", i);
            end--;
        }

        if (end == 0)
            break;
    }
    return 0;
}

int sonasal(int n) {
    int i;

    for (i = 2; i < n; i ++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

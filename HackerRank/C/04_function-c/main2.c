#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {

// Complete this function 

int total,digitvalue;
total = *a+*b;
digitvalue = abs(*a-*b);
*a = total;
*b = digitvalue;
}

int main() {
int a, b;
int *pa = &a, *pb = &b;

scanf("%d %d", &a, &b);
update(pa, pb);
printf("%d\n%d", a, b);

return 0;
}       


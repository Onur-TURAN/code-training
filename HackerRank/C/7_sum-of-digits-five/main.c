#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  int n, i;
  int sum;
  int mod, digits[5];
  scanf("%d", &n);
  if(9999 < n && n < 100000) {
    for(i=0; i < 5; i++){
      digits[i] = n % 10;
      n = n / 10;
      sum += digits[i];
    }
  }
  printf("%d", sum);
  return 0;
}

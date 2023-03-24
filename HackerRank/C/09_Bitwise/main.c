#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k)
{
  int i, j;
  int andMax=0, orMax=0, xorMax=0, tmp;//0 ataması yapılmazsa eğer ram içindeki random değeri döndürür.
  for(i=1;i<n;i++){
    for(j=(i+1);j<=n;j++){
      tmp = i & j;
      if(tmp < k && andMax < tmp){
        andMax = tmp;
      }
      tmp = i | j;
      if(tmp < k && orMax < tmp){
        orMax = tmp;
      }
      tmp = i ^ j;
      if(tmp < k && xorMax < tmp){
        xorMax = tmp;
      }
    }
  }
  printf("%d\n%d\n%d", andMax, orMax, xorMax);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}



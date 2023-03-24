#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b, j;
    scanf("%d\n%d", &a, &b);
  	char* array[11] = {"one","two","three","four","five","six","seven","eight","nine"};
    char* array2[2] = {"even", "odd"};
    
    for(int i = a; i < b+1; i++) {
      if(i<10){
        printf("%s\n",array[i-1]);
      }
      else
      {
        j = i % 2;
        printf("%s\n", array2[j]);
      }
    }

    return 0;
}



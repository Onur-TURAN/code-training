#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,a;
    scanf("%d", &n);
    a = n;
  	int i, j;
	for(i=1;i<=2*n-1;i++)
	{
		if(j<n-abs(n-i))
		{
			printf("%d ",a);
			a--;
		}
		else if(j>n+abs(n-i))
		{
			a++;
			printf("%d ",a);
		}
		else
		{
			printf("%d ",a);
		}
	}
	printf("\n");


    return 0;
}

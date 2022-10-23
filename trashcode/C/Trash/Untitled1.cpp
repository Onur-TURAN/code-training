#include <stdio.h>
#include <math.h>

int F(int a[],int n)
{
	int i,k=0;
	for(i=1;i<n;i++) if(a[i]>a[k]) k=i;
	a[k]=10;
	return k;
}
int main()
{
	int a[]={-5,-6,-11,0,-1,-2},n=6,i;
	if(a[0]>0 || F(a,n)<0) a[1]=a[F(a,n)];
	else a[0]=a[F(a,n)];
	for(i=0;i<n;i++) printf("%4d",a[i]);
	return 0;
}

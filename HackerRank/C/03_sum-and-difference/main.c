#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main () {
	int i1, i2;
	float f1, f2;
	scanf("%d %d", &i1, &i2);
	scanf("%f %f", &f1, &f2);

	if ( 1<=f1<=10^4 && 1<=f2<=pow(10, 4) && 1<=i1<=pow(10, 4) && 1<=i2<=pow(10, 4)){
		i1 = i1+i2;
		i2 = i1-2*i2;
		f1 = f1+f2;
		f2 = f1-2*f2;
		printf("%d %d\n%.1f %.1f ", i1, i2, f1, f2);
	}
		else{
			printf("eheheh");
	
	}
	return (0);
}


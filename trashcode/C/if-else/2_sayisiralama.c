#include<stdio.h>
#include<stdlib.h>
#include<math.h>
// Girilecek 3 sayiyi büyükten küçüğe siralayiniz.
int main (){
	int a,b,c;
	printf("Lutfen 3 sayi giriniz\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	//(2^n)-1 tane ihtimal var
	if(a>b && a>c)
	{
		if(b>c)
		{
			printf("\n%d>%d>%d",a,b,c);
		}
		else
		{
			printf("\n%d>%d>%d",a,c,b);
		}
	}
	else if(b>a && b>c)
	{
		if(a>c)
		{
			printf("\n%d>%d>%d",b,a,c);
		}
		else
		{
			printf("\n%d>%d>%d",b,c,a);
		}
	}
	/***********************************************
	 *********BURADA else if KULLANILABİLİR*********
	 ******AMA ZATEN TEK SEÇENEK KALDIĞI İÇİN ******
	 ************DOGRU YAZIM DILI OLARAK ***********
	 ****************TERCIH EDILMEZ*****************
	 */
	
	else
	{
		if(b>a)
		{
			printf("\n%d>%d>%d",c,b,a);
		}
		else
		{
			printf("\n%d>%d>%d",c,a,b);
		}
	}

	return 0;
}
/************
 ************
 **by biyik**
 ************
 ***********/

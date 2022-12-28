//isim soyisim girdileri alip 18 yasindan buyuk ise ehliyet alabilir dedirten program.
#include<stdio.h>
#include<stdlib.h>

int main(){
	char name[10];
	char surname[10];
	int yas;
	printf("Lutfen adinizi ve soyadinizi birer bosluk bırakarak giriniz:");
	scanf("%s,",&name);
	scanf("%s",&surname);
	printf("%s %s",name,surname);
	printf("\nLutfen yasinizi giriniz:");
	scanf("%d",&yas);
	
	if(yas>=18){
		printf("\nSayin %s %s Yasinizdan dolayi ehliyet alabilirsiniz",name,surname);
	}
	else
	{
		printf("\nSayin %s %s Yasinizdan dolayi ehliyet alamazsiniz, lutfen buyuyun",name,surname);
	}

	return 0;
}

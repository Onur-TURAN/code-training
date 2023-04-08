#include<stdio.h>
#include<string.h>

int main(){

	char isim[5] ="Ali";
	int parola;
       
	int bakiye;
	bakiye = 100;
	parola = 1234;
	char inputname;
	int inputparola,islemparasi;
	int secim;
	printf("Onur Bank'a hos geldiniz \n Lutfen kullanici adinizi giriniz:");
	scanf("%s", &inputname);
	printf("Lutfen sifrenizi giriniz:");
	scanf("%d", &inputparola);

	if(inputparola==parola ) {
		printf("Kullanici bilgileri eslesmistir.");
		printf("asagidaki islemlerden birini seciniz.\n[1]-Para yatirma\n[2]-para cekme\n[3]-kullanici bilgileri\nSeciminiz:");
		scanf("%d", &secim);

		if (secim == 1){
			printf("\n kac para yatirmak istersiniz?");
			scanf("%d", &islemparasi);
			bakiye += islemparasi;
			printf("toplam paraniz %d", bakiye);
		}
		else if(secim==2){
			printf("ne kadar para cekmek istersiniz?");
			scanf("%d", &islemparasi);
			bakiye -= islemparasi;
			printf("bakiyeniz: ", bakiye);
		}
		else if(secim==3){
			printf("kullanici bilgileriniz\n isminiz %s \n parolaniz%d \n bakiyeniz%d", isim, parola, bakiye);
		}
		else
		{
			printf("yanlis sularda yuzuyorsun aslan parcasi");
		}
		
		}
	
		else
		{
			printf("kullanici adi ya da şifre yanlis girilmistir");
		}
		return 0;
		}

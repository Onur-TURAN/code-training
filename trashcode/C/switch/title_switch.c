#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*
Template, Mail atılacak liste ve eğitmen sayısına göre eğitmen bilgileri
*/
int main()
{
	char A, B, C;
	printf("Template için dizin yolunu giriniz.\n");
	scanf("&s", A);
	printf("Mail listesinin dizin yolunu giriniz.\n");
	scanf("&s", B;
	git:printf("Lütfen eğitmrn bilgilrtini giriniz\n");
	C = getchar();
	/* eğitmen sayısını seçiyor */
	switch(getchar())
	{
		case 1:printf("1 eğitmenli durumu seçtiniz"); scanf("&s", C); break;
		case 2:printf("2 eğitmen durumu seçtiniz"); scanf("&s", C); break;
		default:printf("HATA"); goto git;
	}
		if (getchar(1))
		{
			printf("seçim");
		else
			printf("olmadı");
		}

}

/*
openGL ile template üzerinden veriler almamız gerekiyor
*/

/*
Seçime göre dosya işlemleri
1. seçim mail listesinin kopyasını kaydet ve bilgileri sertifika sistemine göm
2. seçim mail listesinin ve gönderilen sertifikaların kopyasını oluştur ve sistemi çalıştır
3. seçim hiçbir şeyin kopyasını almadan sisteme bilgilerle çalıştır.
*/

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(){
	int N,M,yemek,i,j,x,y;
	int yilanx, yilany;
	char yon;
	
	srand(time(NULL));
	printf ("lütfen satır sayısını giriniz.");
	scanf ("%d", &N);
	printf ("lütfen sütun sayısını) giriniz.");
	scanf("%d", &M);
	printf("yemek sayısını giriniz.");
	scanf("%d", &yemek);
	if (yemek >= N*M){
	       	printf("max yemek sayısını aştınız!");
	}
	else
	{
		//oyun dongusunu belirlemek icin atanan deger
		int dongusayisi;
		dongusayisi = yemek;
		
		int alan[N][M];
		//alan matrisine rastgele deger atama
		//
		for ( i = 0; i < N; i++)
		{
			for ( j = 0; j < M; j++)
			{
				alan[i][j]=-1;
			}
        
		}
		//random sekilde alana yemek yerlestirme
		for ( i = 0; i < yemek; i++)
		{
			x= rand()%N;
			y= rand()%M;
			if (alan[x][y]!=0)
			{
				alan[x][y]=0;
			}
			else{
				i--;
			} 
		}
		//random sekilde yilanin yerini belirleme, yilan ve matris sistemini yerlestirme
		for ( i = 0; i < 1; i++)
		{
			x= rand()%N;
			y= rand()%M;
			if (alan[x][y]!=0)
			{
				alan[x][y]=1;
				//yilanin ilk bastaki konumlarını tutabilmek icin atandilar.
				yilanx = x;
				yilany = y;
			}
			else
			{
				i--;
			} 
		}
		//tahtanin ilk halini yazdirma
		for ( i = 0; i < N; i++)
		{
			for ( j = 0; j < M; j++)
			{
				if(alan[i][j]==-1)
					printf("[ ]\t");
				else
				    printf("%d \t", alan[i][j]);
			}
			printf("\n");
		}
		//oyun dongusu
		while(yemeksayisi>0)
		{
			printf("lutfen gitmek istediginiz yonu giriniz:");
			scanf("%d",&yon);
			oldx = yilanx;
			oldy = yilany;
			if(yon = 
		}

}
	return 0;
}

# include <stdio.h>
# include <stdlib.h>
# include <time.h>
int main(){
	
    int N,M,yemek,i,j,x,y,k,yilanx,yilany,hamle,yemeksayisi,oldx,oldy,m;
	int yilanuzunluk=1;
    char yon;
    int alan[100][100];
	int dir_memo[2][100];
	
    srand(time(NULL));
	//satır sayısı alma
    printf ("lütfen satır sayısını giriniz.");
    scanf ("%d", &N);
	//sütun sayısı alma
    printf ("lütfen sütun sayısını giriniz.");
    scanf("%d", &M);
	//yemek sayısı alma
    printf("yemek sayısını giriniz.");
    scanf("%d", &yemek);
	//yemek sayısını kontrol etme
    if (yemek >= N*M)
    {
        printf("max yemek sayısını aştınız! Tekrar giriniz.");
        scanf("%d", &yemek);
        
	}
	else
	{
		//yemek sayısı değişkeni oyun döngüsü koşulunda kullanılmak için oluşturuldu.
	    yemeksayisi=yemek;
		//alan matrisine değer atama
		for ( i = 0; i < N; i++)
		{
			for ( j = 0; j < M; j++)
			{
				alan[i][j]=-1;
			}
        
		}
		//random bir şekilde alana yemek yerleştirme
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
		//random bir şekilde yılanın yerini belirleme, yılan ve alan matrisinde yerleştirme
		for ( i = 0; i < 1; i++)
		{
			x= rand()%N;
			y= rand()%M;
			if (alan[x][y]!=0)
				{
				    alan[x][y]=1;
                    //yilanx yilany değişkenleri ilk koordinatları saklamak için oluşturuldu.
				    yilanx=x;
				    yilany=y;
				}
			else
				i--; 
		}
		//tahtanın ilk halini yazdırma
		for ( i = 0; i < N; i++)
		{
			for ( j = 0; j < M; j++)
			{
				if(alan[i][j]==-1)
					printf("x\t");
				else
				    printf("%d \t", alan[i][j]);
			}
			printf("\n");
		}
		// oyun döngüsü
		while(yemeksayisi>0)
		{
		    printf("lütfen gitmek istediğiniz yönü giriniz.\n");
		    scanf("%c", &yon);
            oldx=yilanx;
			oldy=yilany;
			//yön alma
		    if(yon=='u'||yon=='U')
		    {	
                yilanx--;
		        hamle++;

				if(alan[yilanx][yilany]==0)
		    	{
					//yilanuzunluk değiskeni yilan her yem yediğinde artıp yilanın uzunluğunu tutacak
		        	alan[yilanx][yilany]=1;
		        	yilanuzunluk++;
		        	yemeksayisi--;
                    printf("lütfen gitmek istediğiniz yönü giriniz.\n");
                    scanf("%c",&yon);
                     if(yon=='u'||yon=='U')
                        {
                        oldx=yilanx;
                        oldy=yilany;
                        yilanx--;
                        hamle++;}
                        if(yon=='d'||yon=='D')
                        {
                        oldx=yilanx;
                        oldy=yilany;
                        yilanx++;
                        hamle++;}
                        if(yon=='l'||yon=='L')
                        {
                        oldx=yilanx;
                        oldy=yilany;
                        yilany--;
                        hamle++;}
                        if(yon=='r'||yon=='R')
                        {
                        oldx=yilanx;
                        oldy=yilany;
                        yilany++;
                        hamle++;}
                        for ( m = yilanuzunluk; m>0; m--)
                    {
                        dir_memo[0][m]=dir_memo[0][m-1];
                        dir_memo[1][m]=dir_memo[0][m-1];
                        alan[dir_memo[0][m]][dir_memo[1][m]]=m;
                    }
                        dir_memo[0][0]=yilanx;
                        dir_memo[1][0]=yilany;
                        alan[dir_memo[0][yilanuzunluk]][dir_memo[1][yilanuzunluk]]=-1;
		    	}
                else{
                 
				//oldx ve oldy değişkenleri yılanın yerini saklamayı sağlayacak ki ilerledikçe arkasındaki izi silebilelim
				
                for ( m=yilanuzunluk; m>0; m--)
                {
                    dir_memo[0][m]=dir_memo[0][m-1];
                    dir_memo[1][m]=dir_memo[0][m-1];
                    alan[dir_memo[0][m]][dir_memo[1][m]]=m;
                }
                    dir_memo[0][0]=yilanx;
                    dir_memo[1][0]=yilany;
                    alan[yilanx][yilany]=1;
                    alan[dir_memo[0][yilanuzunluk]][dir_memo[1][yilanuzunluk]]=-1;

                }
               
		        
		    }

		  if(yon=='D'||yon=='d')
		    {	
                yilanx++;
		        hamle++;

				if(alan[yilanx][yilany]==0)
		    	{
					//yilanuzunluk değiskeni yilan her yem yediğinde artıp yilanın uzunluğunu tutacak
		        	alan[yilanx][yilany]=1;
		        	yilanuzunluk++;
		        	yemeksayisi--;
                    printf("lütfen gitmek istediğiniz yönü giriniz.\n");
                    scanf("%c",&yon);
                     if(yon=='u'||yon=='U')
                        {
                        oldx=yilanx;
                        oldy=yilany;
                        yilanx--;
                        hamle++;}
                        if(yon=='d'||yon=='D')
                        {
                        oldx=yilanx;
                        oldy=yilany;
                        yilanx++;
                        hamle++;}
                        if(yon=='l'||yon=='L')
                        {
                        oldx=yilanx;
                        oldy=yilany;
                        yilany--;
                        hamle++;}
                        if(yon=='r'||yon=='R')
                        {
                        oldx=yilanx;
                        oldy=yilany;
                        yilany++;
                        hamle++;}
                        for ( m = yilanuzunluk; m>0; m--)
                    {
                        dir_memo[0][m]=dir_memo[0][m-1];
                        dir_memo[1][m]=dir_memo[0][m-1];
                        alan[dir_memo[0][m]][dir_memo[1][m]]=m;
                    }
                        dir_memo[0][0]=yilanx;
                        dir_memo[1][0]=yilany;
                        alan[dir_memo[0][yilanuzunluk]][dir_memo[1][yilanuzunluk]]=-1;
		    	}
                else{
                 alan[yilanx][yilany]=1;
				//oldx ve oldy değişkenleri yılanın yerini saklamayı sağlayacak ki ilerledikçe arkasındaki izi silebilelim
				
                for ( m=yilanuzunluk; m>0; m--)
                {
                    dir_memo[0][m]=dir_memo[0][m-1];
                    dir_memo[1][m]=dir_memo[0][m-1];
                    alan[dir_memo[0][m]][dir_memo[1][m]]=m;
                }
                    dir_memo[0][0]=yilanx;
                    dir_memo[1][0]=yilany;
                    alan[dir_memo[0][yilanuzunluk]][dir_memo[1][yilanuzunluk]]=-1;

                }
               
		        
		    }
		    
		   	if(yon=='r'||yon=='R')
		    {	
                yilany++;
		        hamle++;

				if(alan[yilanx][yilany]==0)
		    	{
					//yilanuzunluk değiskeni yilan her yem yediğinde artıp yilanın uzunluğunu tutacak
		        	alan[yilanx][yilany]=1;
		        	yilanuzunluk++;
		        	yemeksayisi--;
                    printf("lütfen gitmek istediğiniz yönü giriniz.\n");
                    scanf("%c",&yon);
                     if(yon=='u'||yon=='U')
                        {
                        oldx=yilanx;
                        oldy=yilany;
                        yilanx--;
                        hamle++;}
                        if(yon=='d'||yon=='D')
                        {
                        oldx=yilanx;
                        oldy=yilany;
                        yilanx++;
                        hamle++;}
                        if(yon=='l'||yon=='L')
                        {
                        oldx=yilanx;
                        oldy=yilany;
                        yilany--;
                        hamle++;}
                        if(yon=='r'||yon=='R')
                        {
                        oldx=yilanx;
                        oldy=yilany;
                        yilany++;
                        hamle++;}
                        for ( m = yilanuzunluk; m>0; m--)
                    {
                        dir_memo[0][m]=dir_memo[0][m-1];
                        dir_memo[1][m]=dir_memo[0][m-1];
                        alan[dir_memo[0][m]][dir_memo[1][m]]=m;
                    }
                        dir_memo[0][0]=yilanx;
                        dir_memo[1][0]=yilany;
                        alan[dir_memo[0][yilanuzunluk]][dir_memo[1][yilanuzunluk]]=-1;
		    	}
                else{
                 alan[yilanx][yilany]=1;
				//oldx ve oldy değişkenleri yılanın yerini saklamayı sağlayacak ki ilerledikçe arkasındaki izi silebilelim
				
                for ( m=yilanuzunluk; m>0; m--)
                {
                    dir_memo[0][m]=dir_memo[0][m-1];
                    dir_memo[1][m]=dir_memo[0][m-1];
                    alan[dir_memo[0][m]][dir_memo[1][m]]=m;
                }
                    dir_memo[0][0]=yilanx;
                    dir_memo[1][0]=yilany;
                    alan[dir_memo[0][yilanuzunluk]][dir_memo[1][yilanuzunluk]]=-1;

                }
               
		        
		    }
			
		    
		    if(yon=='l'||yon=='L')
		    {	
                yilany--;
		        hamle++;

				if(alan[yilanx][yilany]==0)
		    	{
					//yilanuzunluk değiskeni yilan her yem yediğinde artıp yilanın uzunluğunu tutacak
		        	alan[yilanx][yilany]=1;
		        	yilanuzunluk++;
		        	yemeksayisi--;
                    printf("lütfen gitmek istediğiniz yönü giriniz.\n");
                    scanf("%c",&yon);
                     if(yon=='u'||yon=='U')
                        {
                        oldx=yilanx;
                        oldy=yilany;
                        yilanx--;
                        hamle++;}
                        if(yon=='d'||yon=='D')
                        {
                        oldx=yilanx;
                        oldy=yilany;
                        yilanx++;
                        hamle++;}
                        if(yon=='l'||yon=='L')
                        {
                        oldx=yilanx;
                        oldy=yilany;
                        yilany--;
                        hamle++;}
                        if(yon=='r'||yon=='R')
                        {
                        oldx=yilanx;
                        oldy=yilany;
                        yilany++;
                        hamle++;}
                        for ( m = yilanuzunluk; m>0; m--)
                    {
                        dir_memo[0][m]=dir_memo[0][m-1];
                        dir_memo[1][m]=dir_memo[0][m-1];
                        alan[dir_memo[0][m]][dir_memo[1][m]]=m;
                    }
                        dir_memo[0][0]=yilanx;
                        dir_memo[1][0]=yilany;
                        alan[dir_memo[0][yilanuzunluk]][dir_memo[1][yilanuzunluk]]=-1;
		    	}
                else{
                 alan[yilanx][yilany]=1;
				//oldx ve oldy değişkenleri yılanın yerini saklamayı sağlayacak ki ilerledikçe arkasındaki izi silebilelim
				
                for ( m=yilanuzunluk; m>0; m--)
                {
                    dir_memo[0][m]=dir_memo[0][m-1];
                    dir_memo[1][m]=dir_memo[0][m-1];
                    alan[dir_memo[0][m]][dir_memo[1][m]]=m;
                }
                    dir_memo[0][0]=yilanx;
                    dir_memo[1][0]=yilany;
                    alan[dir_memo[0][yilanuzunluk]][dir_memo[1][yilanuzunluk]]=-1;

                }
               
		        
		    }
		    
		    if(yilanx<0||yilanx>N||yilany<0||yilany>M)
		    {
				//yılanın duvarlara çarpıp çarpmadığını kontrol etme
		        printf("kaybettiniz!\n");
		        yemeksayisi=0;
		    
		    }
		     
		    for ( i = 0; i < N; i++)
		    {
			    for ( j = 0; j < M; j++)
			    {
				    if(alan[i][j]==-1)
					printf("x\t");
				    else
				    printf("%d \t", alan[i][j]);
			    }
			        printf("\n");
		    }
			printf("hamle sayısı:%d\t",hamle);
            printf("kalan yemek sayisi:%d\t",yemeksayisi);
		
        }	
		printf("\ntebrikler oyunu tamamladınız.");
	}
	return 0;
}

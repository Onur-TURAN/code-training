# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(){
	
    int N,M,yemek,i,j,x,y;
	
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
	else{
	    
		int alan[N][M];
		for ( i = 0; i < N; i++)
		{
			for ( j = 0; j < M; j++)
			{
				alan[i][j]=-1;
			}
        
		}
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
		for ( i = 0; i < 1; i++)
		{
			x= rand()%N;
			y= rand()%M;
			if (alan[x][y]!=0)
				alan[x][y]=1;
			else
				i--; 
		}
		for ( i = 0; i < N; i++)
		{
			for ( j = 0; j < M; j++)
			{
				if(alan[i][j]==-1)
					printf(" \t");
				else
				    printf("%d \t", alan[i][j]);
			}
			printf("\n");
		}

}
	return 0;
}

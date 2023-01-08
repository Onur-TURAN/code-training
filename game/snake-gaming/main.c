#include<stdio.h>
#include<stdlib.h>

int main(){
int i, j;
int beceriksiz, puan;
int row, column;
int foodx, foody;
printf("Welcome to White Snake game!\n Please enter the row and column values for the field you want to play, respectively, by pressing the 'enter' key.");
printf("\n-");
scanf("%d",&row);
printf("\n-");
scanf("%d",&column);
//gamearea();
	for(i=0; i<row; i++){
		for(j=0; j<column; j++) {
			if (i==0 || i==row-1 || j==0 || j==column-1){
				printf("#");
			}
			else
			{
				printf(" ");
			}
		}
			printf("\n");
		}
	//food();
	beceriksiz = 0;
	foodx = rand()%column;
		if(foodx>0){
			foody= rand()%row;
		if(foody>0){
			printf("done");
		}
		else
		{
			printf("it's don't done");
		}
		}
		else if(foodx==0){
			return beceriksiz;
		}
	return 0;	
}


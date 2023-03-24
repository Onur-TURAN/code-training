#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	//user's information gathering
	//luck number game coding
	//user's information show
	
	char name[10], surname[10];
	int select;
	int number;
	printf("Welcome to Luck Number game \n Please give me your name:");
	scanf("%s",&name);
	printf("\nPlease give me your surname:");
	scanf("%s",&surname);
	printf("\nPlease select to follow to \n [1]-Lucky number game\n [2]-take my information's detail\n");
	scanf("%d",&select);
	if(select==1)
	{
		printf("Let's go to play ! ! ! ! \n Please select to 1-20 around any number");
		scanf("%d",&number);
		srand(time(NULL));
		int randomNumber=1+rand()%20;
		// Func, provides control of numb select by user
		if(number==randomNumber)
		{
			printf("\nYour select's number:%d\nLucky Number Game's select number:%d\n",number,randomNumber);
			printf("********\n*********\n! ! ! Y O U W I N ! ! !\n************\n******* ");
		}
		else
		{
			printf("Your select's number:%d\n Lucky Numbers Game's select number:%d\n",number, randomNumber);
			printf("****\nG A M E O V E R\n*****");
		}
	}
	else if(select==2)
	{
		printf("Your name is %d, surname is %d",name,surname);
	}

	return 0;
}

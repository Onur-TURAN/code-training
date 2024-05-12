#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SNAKE_MAX_LENGTH 20
void snakeMove(int, int);
void put_money(void);
void update_body();
void output(void);
void gameover(void);
char map[12][12] =
{"************",
 "*XXXXH     *",
 "*          *",
 "*          *",
 "*          *",
 "*          *",
 "*          *",
 "*          *",
 "*          *",
 "*          *",
 "*          *",
 "************"};

int snakeX[SNAKE_MAX_LENGTH] = {1, 2, 3, 4, 5};
int snakeY[SNAKE_MAX_LENGTH] = {1, 1, 1, 1, 1};
int snakeLength = 5;
int game=1,origin=1,eaten=0;
//ana fonksiyon main dedigimiz kısım
int main() {
        char ch;
        srand(time(NULL));
        put_money();
        output();
        origin=0;
	//oyun kurallarının oldugu bolum
        while(game) {
                scanf(" %c",&ch);
                switch(ch) {
                case 'w':
                        snakeMove(1,1);
                        break;
                case 's':
                        snakeMove(2,1);
                        break;
                case 'a':
                        snakeMove(3,1);
                        break;
                case 'd':
                        snakeMove(4,1);
                        break;
                default:
                        continue;
                }
                if(eaten==1) {
                        put_money();
                        eaten=0;
                }
                output();
        }
        gameover();
        return 0;
}
//yemek yedikten sonra boy uzatma
void update_body()
{
        int i;
        for(i=0;i<4;i++){
                snakeX[i]=snakeX[i+1];
                snakeY[i]=snakeY[i+1];
        }

}
//karakter hareketlerinin yazildigi kod
void snakeMove(int direction, int distance) {
        int move=1;
        switch(direction) {
        case 1:
                if(snakeY[3]==snakeY[4]-distance)
                        move=0;
                else{
                        update_body();
                        snakeY[4]=snakeY[4]-distance;
                }
                break;
        case 2:
                if(snakeY[3]==snakeY[4]+distance)
                        move=0;
                else{
                        update_body();
                        snakeY[4]=snakeY[4]+distance;
                }
                break;
        case 3:
                if(snakeX[3]==snakeX[4]-distance)
                        move=0;
                else{
                        update_body();
                        snakeX[4]=snakeX[4]-distance;
                }
                break;
        case 4:
                if(snakeX[3]==snakeX[4]+distance)
                        move=0;
                else{
                        update_body();
                        snakeX[4]=snakeX[4]+distance;
                }
        }

}

void output(void) {
        int x, y,i;
        if(origin==0) {
                for(x=1;x<11;x++) {
                        for(y=1;y<11;y++) {
                                if(map[x][y]!='$')
                                        map[x][y]=' ';
                        }
                }
                if(map[snakeY[4]][snakeX[4]]=='$')
                        eaten=1;
                for(i=0;i<4;i++)
                        map[snakeY[i]][snakeX[i]]='X';
                map[snakeY[4]][snakeX[4]]='H';
                if(snakeX[4]==0||snakeX[4]==11||snakeY[4]==0||snakeY[4]==11)
                        game=0;
                for(i=0;i<4;i++) {
                        if(snakeX[4]==snakeX[i]&&snakeY[4]==snakeY[i])
                                game=0;
                }
        }
        for(x=0;x<12;x++) {
                for(y=0;y<12;y++)
                        printf("%c",map[x][y]);
                printf("\n");
        }
}
void gameover(void) {
        printf("Game Over!!!\n");
        exit(0);
}
//random olarak yemek yerlestirme
void put_money(void) {
        int foodx,foody,done=0;
        while(done==0) {
                foodx=rand()%12;
                foody=rand()%12;
                if(map[foodx][foody]==' ') {
                        map[foodx][foody]='$';
                        done=1;
                }
        }
}

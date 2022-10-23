#include <stdio.h>
#include <conio.h>
#include <string.h>
int strlenn(char *);
int main(void) {
int i,j=0;
char kelime[10],harf[10];
printf("Kelime: ");
gets(kelime);
int uzunluk=strlen(kelime);
for(i=uzunluk-1;i>=0;i--)
{
harf[j]=kelime[i];
j++;
}
int a=0;
for(i=0;i<uzunluk;i++)
{
if(harf[a]==kelime[i])
{
a++;
}
}
if(a==uzunluk)
printf("Kelime Palindromiktir");
else
printf("Kelime Palindromik Deðildir");
return 0;}

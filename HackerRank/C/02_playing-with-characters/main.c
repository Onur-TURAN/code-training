#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
        char word, str[128], sen[128];
        scanf("%c", &word);
        scanf("%s\n", &str);
        scanf("%[^\n]%*c", &sen);
        printf("%c\n%s\n%s\n", word, str, sen);
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
        return 0;
}


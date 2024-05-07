#include <stdio.h>

int main()
{
    int a, b;
    int c=0;    
    printf("SCRIVI UN NUMERO E TI DIRÒ SE È PRIMO\n");
    scanf("%d", &a);

    while(a/a==1 && a/1==a && a%b!=0 )  //RIPETE UNA CONDIZIONE FINO A QUANDO ESSA NON DIVENTA FALSA//
    {
        c=c+1;
        printf("È PRIMO");
    }
    if (a%b==0)
    {
        printf("NON È PRIMO");
    }
}

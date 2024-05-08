#include <stdio.h>

int main()
{
    int a, b=2;
    int c=0;    
    printf("SCRIVI UN NUMERO E TI DIRÒ SE È PRIMO\n");
    scanf("%d", &a);

    while(b<a)  //RIPETE UNA CONDIZIONE FINO A QUANDO ESSA NON DIVENTA FALSA//
    {
        if (a%b==0)
        {
            c++;
        }
        b++;
    }
    if (c==0)
    {
        printf("È PRIMO");
    }
    else 
    {
        printf("NON È PRIMO" );
    }
}

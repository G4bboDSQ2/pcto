#include <stdio.h>

int main()
{
    int a=1969;
    int b;
        printf("L'uomo si è recato sulla Luna in un dato anno... Scrivi la tua data di nascita per scoprire se sei nato lo stesso anno!\n");
        scanf("%d", &b);
    
    if (a==1969 && b==1969)
    {
        printf("Sei nato nello stesso anno in cui braccioforte e la sua gang si sono recati su tale satellite con il nome di Luna");
    }
    else if (a<b)
    {
        printf("Spiaze non sei nato lo stesso anno. Solo %d anni dopo...", b-a);
    }
    else if (a>b)
    {
        printf("Spiaze non sei nato lo stesso anno. Solo %d anni prima...", a-b);
    }
}
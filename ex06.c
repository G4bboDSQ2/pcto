#include <stdio.h>

int main()
{
    int eta;

    printf("INSERIRE LA PROPRIA ETÀ\n");
    scanf("%d", &eta);

    if(eta>=18 && eta<100) //PER METTERE ALTRE CONDZIONI=> &&=AND; ||=OR; !=NOT//
    {
        printf("UTENTE MAGGIORENNE");
    }
    else if(eta>=100)
    {
        printf("BELLA PE TE CHE C'HAI 100 ANNI");
    }
    if (eta<=0) 
    {
        printf("AHAH DIVERTENTE SVEGLIATI FREDDO");
    }
    if (eta<18 && eta<100 && eta>0)
    {
        printf("UTENTE NON MAGGIORENNE");
    }
}
#include <stdio.h>

int main()
{
    int a, b;
    
    printf(" inserisci due numeri interi a tuo piacimento\n");
    scanf("%d %d", &a, &b);

    if(a>b)
    {
        printf("a è > di b");
    }
    else if(a==b)
    {
        printf("a è = a b");
    
    }
    if(a<b)
    {
        printf("a è < di b");
    }
}
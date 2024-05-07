#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    
    printf("INSERIRE 3 NUMERI\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a+b>c && b+c>a && a+c>b && a==b && b==c)
    {
        printf("DAJE È UN TRIANGOLO EQUILATERO");
    }
    else if (a+b>c && b+c>a && a+c>b && a==b || b==c || c==a)
    {
        printf("DAJE È UN TRIANGOLO ISOSCELE");
    }
    else if (a+b>c && b+c>a && a+c>b && a!=b && b!=c && c!=a)
    {
        printf("DAJE È UN TRIANGOLO SCALENO");
    }
    else 
    {
        printf("SPIAZE NON È UN TRIANGOLO");
    }
}

#include <stdio.h>

int main()
{
    //VARIABILI DAJE//

    int a; //numeri interi//
    float b=2.5; //numeri con virgola//
    double c=2.6; //numeri con virgola + precisi (max 15 numeri dopo la virgola)//

    a=2;
    printf("a: %d\n", a); //identificazione per int: %d//
    printf("b: %f\n", b); //identificazione per float: %f//
    printf("c: %lf\n", c); //identificazione per double: %lf//

    //SOMMA E DIFFERENZA = a+b ; a-b//  // MOLTIPLICAZIONE E DIVISIONE = a*b ; a/b//

    printf("a+10 = %d\n", a + 10);
    
    printf("b-5 = %f\n", b - 5);

    printf("a*5 = %d\n", a * 5);

    printf("c/9 = %lf\n", c / 9);



}

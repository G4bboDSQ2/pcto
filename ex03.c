//SCANF: prendere input dall'utente; il programma si ferma attendendendo che l'utente scriva qualcosa//

#include <stdio.h>

int main ()
{
    int a;
    scanf("%d", &a); //no testo se nonil tipo della variabile tra le stringhe//
    float b;
    scanf("%f", &b);

    printf("I TUOI NUMERI SONO... %d E %F", a, b); 
}
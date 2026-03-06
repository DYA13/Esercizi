#include <stdio.h>

int main()
{
    int num1;
    double num2;
    printf("Inserisci un numero di tipo int: ");
    scanf("%d", &num1);

    printf("Inserisci un numero di tipo double: ");
    scanf("%lf", &num2);

    printf("Un numero di tipo int: %d\n", num1);
    printf("Un numero di tipo double: %g\n", num2);

    return 0;
};
/*
scanf ignora spazi e tab prima del numero.
Se l’utente inserisce J.S. Bach, scanf non legge il numero e la lettura fallisce.
Se l’utente inserisce 1685J.S. Bach, scanf legge solo 1685 e si ferma al primo carattere non numerico.
*/

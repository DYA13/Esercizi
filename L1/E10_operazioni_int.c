#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Inserisci il primo numero di tipo int : ");
    scanf("%d", &num1);

    printf("Inserisci il secondo numero di tipo int : ");
    scanf("%d", &num2);

    printf("La somma di %d e %d e %d\n", num1, num2, num1 + num2);
    printf("Il valore del primo meno il secondo e %d\n", num1 - num2);
    printf("Il prodotto e %d\n", num1 * num2);
    printf("La divisione intera e %d\n", num1 / num2);
    printf("Il resto della divisione e %d\n", num1 % num2);

    return 0;
}

/*
In relazione al programma che avete scritto per risolvere l’Esercizio 10, cosa
succede se il secondo valore intero inserito dall’utente è zero?
Se il secondo numero è 0, non è possibile eseguire la divisione o il resto.
La divisione per zero non è definita e il programma può produrre un errore o risultati non corretti.
*/
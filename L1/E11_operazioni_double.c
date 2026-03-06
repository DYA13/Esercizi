#include <stdio.h>

int main()
{
    double num1, num2;
    printf("Inserisci il primo numero di tipo double : ");
    scanf("%lf", &num1);

    printf("Inserisci il secondo numero di tipo double : ");
    scanf("%lf", &num2);

    printf("La somma di %g e %g e %g\n", num1, num2, num1 + num2);
    printf("Il valore del primo meno il secondo e %g\n", num1 - num2);
    printf("Il prodotto e %g\n", num1 * num2);
    printf("La divisione intera e %g\n", num1 / num2);
    // printf("Il resto della divisione e %g\n", num1 % num2);

    return 0;
}

/*
Cosa succede se si tenta di eseguire a%b con a o b di tipo double?
Se si tenta di eseguire a % b con valori di tipo double, il programma non compila.
L’operatore % può essere usato solo con valori interi (int).
Il compilatore produce un errore.
*/

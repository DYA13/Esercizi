#include <stdio.h>

int main()
{
    double num1, num2;

    printf("Inserisci il primo numero di tipo double : ");
    scanf("%lf", &num1);

    printf("Inserisci il secondo numero di tipo double : ");
    scanf("%lf", &num2);

    printf("Se vuoi eseguire una somma inserisci 1,\n");
    printf("una sottrazione inserisci 2,\n");
    printf("una moltiplicazione inserisci 3,\n");
    printf("una divisione inserisci 4:\n");

    int choice;
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("La somma è: %.1lf\n", num1 + num2);
        break;
    case 2:
        printf("La sottrazione è: %.1lf\n", num1 - num2);
        break;
    case 3:
        printf("La moltiplicazione è: %.1lf\n", num1 * num2);
        break;
    case 4:
        if (num2 != 0)
        {
            printf("La divisione è: %.1lf\n", num1 / num2);
        }
        else
        {
            printf("Errore: divisione per zero non è permessa.\n");
        }
        break;
    default:
        printf("Scelta non valida.\n");
        break;
    }

    return 0;
}

/*
Osservate: l’analisi
dei dati inseriti dall’utente si basa sul costrutto selezione.
È necessario usare il costrutto iterazione in questo programma?

Risposta:
No, non è necessario usare un costrutto di iterazione in questo programma.
Per questo esercizio non serve un ciclo (for, while, do-while), perché:
- l’utente inserisce i dati una sola volta;
- il programma esegue una sola operazione;
- dopo aver mostrato il risultato, il programma termina.
Per gestire la scelta dell’operazione è sufficiente usare un costrutto di selezione, come switch.

*/
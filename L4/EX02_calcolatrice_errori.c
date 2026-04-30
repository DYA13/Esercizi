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
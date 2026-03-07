#include <stdio.h>

int main(void)
{
    int num;
    printf("Inserisci il numero intero: ");
    scanf("%d", &num);

    while (num < 1)
    {
        printf("Errore: il numero deve essere >= 1. Riprova:");
        scanf("%d", &num);
    };

    int somma = 0;

    for (int i = 1; i <= num; i++)
    {
        somma = somma + i;
    };

    int formula = num * (num + 1) / 2;

    printf("La somma con il ciclo for : %d\n", somma);
    printf("La somma con la formula : %d\n", formula);

    return 0;
};

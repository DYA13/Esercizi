#include <stdio.h>

int main(void)
{
    int num;
    printf("Inserisci un numero intero n >= 1: ");
    scanf("%d", &num);

    while (num < 1)
    {
        printf("Errore: inserisci un numero >= 1: ");
        scanf("%d", &num);
    }

    int somma = 0;

    for (int i = 1; i <= num; i++)
    {
        somma = somma + i * i;
    }

    int formula = num * (num + 1) * (2 * num + 1) / 6;

    printf("La somma dei primi n quadrati e: %d\n", somma);
    printf("La somma dei primi n quadrati con la formula e: %d\n", formula);

    return 0;
};
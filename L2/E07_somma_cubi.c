#include <stdio.h>

int main(void)
{
    int num;

    printf("Inserisci il numero intero: ");
    scanf("%d", &num);
    while (num < 1)
    {
        printf("Errore: inserisci un numero >= 1: ");
        scanf("%d", &num);
    };

    int somma = 0;

    for (int i = 1; i <= num; i++)
    {
        somma = somma + i * i * i;
    };

    int formula = num * num * (num + 1) * (num + 1) / 4;

    printf("La somma dei primi n cubi e: %d\n", somma);
    printf("La somma dei primi n cubi con la formula e: %d\n", formula);

    return 0;
}

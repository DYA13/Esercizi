#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i;
    int somma;
    int n;
    int check;

    do
    {
        printf("Inserisci la cifra:\n");
        scanf("%d", &n);
    } while (n <= 0);

    somma = 0;
    for (i = 1; i <= n; i++)
    {
        somma = somma + i;
    }

    check = n * (n + 1) / 2;
    printf("La sommatoria nei due modi vale %d %d\n", somma, check);

    return 0;
};

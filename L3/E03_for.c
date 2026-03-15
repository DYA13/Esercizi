#include <stdio.h>
// Costrutto for
int main()
{

    int n;
    int somma = 0;

    printf("Inserisci un numero:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        somma = somma + i;
    };
    printf("Somma dei primi %d numeri = %d\n ", n, somma);

    return 0;
};
#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Benvenuto nel calcolatore del MCD (algoritmo di Euclide)!\n");

    printf("Inserisci il primo numero intero:\n");
    scanf("%d", &a);
    printf("Inserisci il secondo numero intero:\n");
    scanf("%d", &b);

    if (a <= 0 || b <= 0)
    {
        printf("Errore: a e b devono essere maggiori di 0\n");
        return -1;
    };

    int x = a;
    int y = b;
    int iterazioni = 0;

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        };
        iterazioni++; // incrementa il contatore delle iterazioni
    };
    printf("Il mcd del %d e %d e': %d\n", x, y, a);
    printf("Le iterazioni sono: %d\n", iterazioni);

    return 0;
};
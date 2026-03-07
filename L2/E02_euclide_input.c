#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Welcome to Euclide Calculator!\n");

    printf("Inserisci il primo numero intero:\n");
    scanf("%d", &a);
    printf("Inserisci il secondo numero intero:\n");
    scanf("%d", &b);

    int x = a;
    int y = b;

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
    };
    printf("Il mcd del %d e %d e': %d\n", x, y, a);

    return 0;
};

#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c;

    printf("Inserisci il valore di a: ");
    scanf("%lf", &a);

    while (a == 0)
    {
        printf("Errore: a deve essere diverso da 0. Reinserisci a: ");
        scanf("%lf", &a);
    };

    printf("Inserisci il valore di b: ");
    scanf("%lf", &b);

    printf("Inserisci il valore di c: ");
    scanf("%lf", &c);

    printf("Equazione: %gx^2 + %gx + %g = 0\n", a, b, c);

    double delta = b * b - 4 * a * c;
    printf("Discriminante (delta) = %g\n", delta);

    if (delta < 0)
    {
        printf("L'equazione non ha soluzioni reali.\n");
    }
    else if (delta == 0)
    {
        double x = -b / (2 * a);
        printf("L'equazione ha una sola soluzione reale: x = %g\n", x);
    }
    else
    {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);

        printf("L'equazione ha due soluzioni reali:\n");
        printf("x1 = %g\n", x1);
        printf("x2 = %g\n", x2);
    }

    return 0;
};
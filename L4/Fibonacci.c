#include <stdio.h>

int main(void)
{
    int n;

    do
    {
        printf("Inserisci un intero positivo: "); // printf deve essere chiamata con le parentesi tonde e la stringa come argomento
        scanf("%d", &n);
    } while ((n <= 0));

    printf("F(%d)=", n);

    int i;
    int f_i = 1, f_prec = 1;

    for (i = 3; i <= n; i++)
    {
        int aux = f_i;
        f_i = f_i + f_prec; // mancava l'istruzione che aggiorna f_i sommando f_prec
        f_prec = aux;
    }
    printf("%d\n", f_i);
}

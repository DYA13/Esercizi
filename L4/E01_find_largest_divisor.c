#include <stdio.h>

/* Scrivere un programma che prende in input due numeri interi,
k, e n, e trova il massimo numero divisore di k e minore di n */

int main()
{

    int n;
    int k;
    int i;
    int result = -1; // valore fuori dal dominio: lo usiamo ANCHE come flag.

    // leggiamo i numeri in un do-while.
    do
    {
        printf("Inserisci n e k separati da spazio: ");
        scanf("%d %d", &n, &k);
    } while (n <= 0 || k <= 0); // usiamo || invece di && perché basta che UNO dei due numeri sia <= 0 per ripetere il ciclo.
    for (i = 1; i < n; i++) // il ciclo parte da 1 e non da 0,perché non possiamo dividere per 0.
        if (k % i == 0)     // controlliamo se k è divisibile per i.Prima era i % k == 0, che era sbagliato.
            result = i;

    if (result == -1)
    {
        printf("Non ho trovato nessun divisore.\n");
    }
    else
    {
        printf("Il massimo divisore: %d\n", result);
    }
    return 0;
}

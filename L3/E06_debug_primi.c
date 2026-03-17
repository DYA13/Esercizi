#include <stdio.h>

int main()
{

    int i; // il numero che verifichiamo per vedere se è primo
    int j; // possibile divisore del numero i
    int n; // numero massimo fino al quale cerchiamo i numeri primi
    int flag = 0;

    do
    {
        printf("Inserisci una cifra massima per calcolare i numeri primi: ");
        scanf("%d", &n);
    } while (n <= 0); // se l’utente inserisce un numero minore o uguale a 0, il programma chiede di nuovo il numero.

    printf("Numeri primi fino a %d: 2 ", n);

    for (i = 3; i <= n; i += 2) // errore in codice originale:for (i = 3; i <= n; i+=2);  <-- errore, nel codice dello slide c'era un ';' dopo il for questo rendeva il ciclo vuoto
    {
        // Prima di controllare i divisori, assumiamo che il numero sia primo.
        flag = 1; // errore in codice originale: bisogna impostare flag = 1 prima di controllare i divisori

        for (j = 2; j * j <= i; j++)
        {
            if (i % j == 0) // errore i codice originale: bisogna controllare la divisibilità di i, non di n
                flag = 0;
        }

        if (flag)
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
/*
Riassunto delle modifiche:
- rimosso ';' dopo for , linea 19
- aggiunto flag = 1 , linea 22
- corretto controllo i % j, linea 26
*/
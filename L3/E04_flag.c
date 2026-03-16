#include <stdio.h>

#define NUMERO 3    // numero da indovinare
#define TENTATIVI 3 // numero massimo di tentativi

int main()
{
    int guess;       // variabile per il numero inserito dall'utente
    int counter = 0; // contatore dei tentativi, inizializzato a 0
    int trovato = 0; // variabile flag (sentinella): 0 = numero non trovato, 1 = trovato

    while (counter < TENTATIVI && !trovato) // il ciclo continua finché ci sono tentativi e il numero non è stato trovato
    {
        printf("Tentativo %d: inserisci numero: ", counter + 1);
        scanf("%d", &guess);

        if (guess == NUMERO) // controlla se il numero inserito è uguale al numero segreto
        {
            trovato = 1; // se è uguale — impostiamo il flag (numero trovato)
            printf("Hai trovato il numero in %d tentativi\n", counter + 1);
        }
        else if (guess > NUMERO) // se il numero inserito é maggiore del numero segreto
        {
            printf("Il numero inserito e' maggiore del numero segreto\n");
        }
        else if (guess < NUMERO) // se il numero inserito é minore del numero segreto
        {
            printf("Il numero inserito e' minore del numero segreto\n");
        }

        counter++; // aumentiamo il contatore dei tentativi di 1
    };

    if (!trovato) // se dopo il ciclo il numero non è stato trovato
    {
        printf("Hai finito i tentativi\n");
    }

    return 0;
}

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c;
    int scelta;

    printf("Inserisci un carattere: ");
    c = getchar();

    while (!isalpha(c))
    {
        printf("Il carattere %c non e' alfabetico\n", c);

        while (getchar() != '\n') // elimina i caratteri rimanenti nella riga di input
            ;
        printf("Inserisci un carattere: ");
        c = getchar();
    }

    printf("Conversione in maiuscola o in minuscola? (1=maiuscola, 2=minuscola): ");
    scanf("%d", &scelta);

    if (scelta == 1)
    {
        printf("Il carattere convertito in maiuscolo e': %c\n", toupper(c));
    }
    else if (scelta == 2)
    {
        printf("Il carattere convertito in minuscolo e': %c\n", tolower(c));
    }
    else
    {
        printf("Inserisci 1 or 2! \n");
    }

    return 0;
};

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c;

    printf("Inserisci un carattere: ");
    c = getchar();

    while (c != '\n')
    {
        if (!isalpha(c))
        {
            printf("Il carattere %c non e alfabetico\n", c);
        }
        else if (isupper(c))
        {
            printf("Il carattere %c e una lettera maiuscola\n", c);
        }
        else
        {
            printf("Il carattere %c e una lettera minuscola\n", c);
        }
        while (getchar() != '\n') // Leggere i caratteri fino a quando non si incontra il tasto Invio.
        {
        }

        printf("Inserisci un carattere: ");
        c = getchar();
    }

    return 0;
}

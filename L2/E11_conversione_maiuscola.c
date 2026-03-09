#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c;
    printf("Inserisci un carattere: ");

    c = getchar();

    if (isalpha(c))
    {
        printf("Il carattere convertito in maiuscolo e': %c\n", toupper(c));
    }
    else
    {
        printf("Il carattere %c non e' alfabetico\n", c);
    };

    return 0;
};

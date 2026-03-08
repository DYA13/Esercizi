#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c;

    printf("Inserisci un carattere: ");
    c = getchar();

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

    return 0;
}

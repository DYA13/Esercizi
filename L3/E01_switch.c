#include <stdio.h>

// Costrutto switch
int main()
{

    int scelta;

    printf("1 - Ciao\n");
    printf("2 - Arivederci\n");
    printf("3- Buona giornata\n");

    printf("Scegli iun numero: ");
    scanf("%d", &scelta);

    switch (scelta)
    {
    case 1:
        printf("Ciao!\n");
        break;
    case 2:
        printf("Arivederci!\n");
        break;
    case 3:
        printf("Buona giornata!\n");
        break;
    default:
        printf("Scelta non valida\n");
    }

    return 0;
};
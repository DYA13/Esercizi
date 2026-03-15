#include <stdio.h>

// Costrutto while
int main()
{

    int i = 0;
    int n;
    printf("Inserisci un numero:");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
};

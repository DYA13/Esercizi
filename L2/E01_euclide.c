#include <stdio.h>

int main(void)
{
    int a = 214, b = 128; // Deve essere a,b > 0

    printf("Il m.c.d. di %d e %d e': ", a, b);

    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    printf("%d\n", a);
    return 0;
};

/*
Se i valori in ingresso non rispettano la condizione a > 0 e b > 0,
il programma può entrare in un ciclo infinito e non terminare.
In questo caso è necessario interrompere l'esecuzione con Ctrl + C.
*/

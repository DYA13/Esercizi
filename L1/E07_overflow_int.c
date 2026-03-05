#include <stdio.h>
#include <limits.h>

int main()
{
    int num = INT_MAX;

    printf("num = %d\n", num); // num = 2147483647

    num = num + 1;

    printf("num dopo + 1 = %d\n", num); // num dopo + 1 = -2147483648

    return 0;
};
/*
 Quando la variabile num contiene il valore INT_MAX,
 rappresenta il valore massimo che un intero può memorizzare (INT_MAX = 2147483647).
Quando si somma 1 a INT_MAX, il tipo int non può rappresentare un numero più grande.
Si verifica quindi un overflow e il valore diventa -2147483648.
*/

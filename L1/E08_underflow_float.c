#include <stdio.h>
#include <float.h>

int main()
{
    float num = FLT_MIN;
    printf("num = %g\n", num); // num = 1.17549e-38, g - scientific notation

    num = num / FLT_MAX;

    printf("num dopo divisione = %g\n", num); // num dopo divisione = 0

    return 0;
};
/*
FLT_MIN rappresenta il valore positivo minimo rappresentabile da un numero di tipo float.
Quando dividiamo questo valore per un numero molto grande (FLT_MAX),
il risultato diventa troppo piccolo per essere rappresentato normalmente.
Si verifica quindi un underflow e il valore risultante diventa 0
(o un numero molto vicino a 0).
*/

#include <stdio.h>
int funcion()
{
    static int numero = 10; /* Variable est�tica */
    numero++;               /* Mantiene el valor de la ejecuci�n anterior */
    return numero;
}
int main()
{
    /* Imprime el resultado de dos invocaciones a la funci�n */
    printf("%d\n", funcion()); /* Imprime el n�mero 11 */
    printf("%d\n", funcion());
    printf("%d\n", funcion());
    return 0;
}

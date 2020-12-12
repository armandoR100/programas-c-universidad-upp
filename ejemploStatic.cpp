#include <stdio.h>
int funcion()
{
    static int numero = 10; /* Variable estática */
    numero++;               /* Mantiene el valor de la ejecución anterior */
    return numero;
}
int main()
{
    /* Imprime el resultado de dos invocaciones a la función */
    printf("%d\n", funcion()); /* Imprime el número 11 */
    printf("%d\n", funcion());
    printf("%d\n", funcion());
    return 0;
}

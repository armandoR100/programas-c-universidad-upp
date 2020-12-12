#include <stdio.h>
#include "prueba.h"

void funcion1(int uno){
    printf("Uno = %d\n", uno);
}
void funcion2(int dos){
    printf("Dos= %d\n", dos);
}
main()
{
    funcion1(1);
    funcion2(2);
    VariableGlobal = CONST1;
    printf("Variable Global= %d\n", VariableGlobal);
}

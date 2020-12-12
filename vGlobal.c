#include <stdio.h>
#include <stdlib.h>

int vGlobal = 4;

void ejemplo() {
    int vLocal = 7;
    printf("vLocal es una variable local y vale %d\n", vLocal);
    printf("vGlobal*vLocal vale %d\n", vGlobal*vLocal);
}

int main() {
    ejemplo();
    printf("vGlobal es una variable global y vale %d\n", vGlobal);
    printf("varLoc es una variable local y vale %d\n", i);
    return 0;
}

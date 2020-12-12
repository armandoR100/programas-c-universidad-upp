#include <stdio.h> 
#include<stdlib.h>
// Alumno: Armando Rafael Romero Juarez
// Materia: Programacion Estructura
// Funcion interativa del factorial de un numero
/* En esta funcion utilizara un ciclo para ir 
   incrementando una variable y esta multiplicarla
   por el valor guardado entre la variable i y fact=1 */
int main(){ 
    int num,i,fact=1; 

    printf("\n Ingrese numero: ");
    scanf("%d",&num);
 
     for (i=1;i<=num;i++){ 
       fact=i*fact; 
     } 
    printf("\n El factorial del numero %d es -> %d",num,fact );
    printf("\n\n");
 system ("pause");
 return 0; 
}

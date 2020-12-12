#include <stdio.h>   
// Alumno: Armando Rafael Romero Juarez
// Materia: Programacion Estructura
// Funcion_Recursiva_De_Un_Numero_Binario
/* En esta funcion se llama a ella misma y dividirse
   entre dos,mostrandola su mod del numero           */
              
void Binario( int n){ 
 
        if ( n != 0 ){
          Binario(n/2);
          printf("%d  ", n%2);
        } 

}  

int main()
{  
 int num; 

 printf("\nIntroduzca un numero entero: ");
 scanf("%d", &num);

 Binario(num);

 return 0;
}  

// PROGRAMA: Palindromo Recursivo.
// ALUMNO: Armando Rafael Romero Juarez.
// MATERIA: Programacion Estructurada.
// PROFESORA: Irianely Perez.
/* Este programa consiste en verificar si una palabra es palindromo */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define VERDADERO 1
#define FALSO     0

int palindromo(char const *cadena, int longitud);

int main()
{
   //char s[] = "anitalavalatina";
   char t[] = "foozle";
   
  // printf("%s ==> %d\n", s, palindromo(s, strlen(s)));
 printf("%s ==> %d\n", t, palindromo(t, strlen(t)));
   
   
   if (   palindromo(t,strlen(t)) == 1     ){
       printf("es palindromo");
   }else{
       printf("no es");
   }
   
   return  0;
}

int palindromo(char const *cadena, int longitud)
{
   if (longitud < 2)
      return VERDADERO;
   if (cadena[0] != cadena[longitud - 1])
      return FALSO;

   return palindromo(cadena + 1, longitud - 2);
}


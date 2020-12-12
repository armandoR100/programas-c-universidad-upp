// PROGRAMA: Palindromo de forma iterativa 2.
// ALUMNO: Armando Rafael Romero Juarez.
// MATERIA: Programacion Estructurada.
// PROFESORA: Irianely Perez.
/* Este programa consiste en verificar si una palabra es palindromo con el ciclo while. */
#include <stdio.h>
int main()
 {
  int i=0, j ,tam ,mitad ;
 // char palabra[ ]={ 'p' ,'a' ,'r', 'r', 'a' ,'p'    };
  // char palabra[ ]={ 'p' ,'a' ,'r', 'r', 'a'     };
   char palabra[ ]={ 'a' ,'n' ,'i', 't', 'a','l','a','v','a','l','a','t','i','n','a'   };
   
   tam = sizeof (palabra)/sizeof (char) ;
   j = tam - 1;
   mitad = j / 2;
 
   while ( palabra[i] == palabra[j]  ){
        if ( mitad == i ){
             printf("\n Es palindromo");
        break;
        }
       j -- ;
       i++;
   }
   if ( mitad != i )
   {
     printf("\n No es palindromo ");
   }
   
   printf("\n");
   for (i=0; i<tam; i++){
       printf("|%c|",palabra[i] );
   }
 
 return 0;
}

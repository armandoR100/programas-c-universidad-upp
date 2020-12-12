#include<stdio.h>
int main()
{ 
/* inicia el programa */
int f,c;
char matriz[8][8]; 
/* declaración de posiciones para los elementos de la matriz "tablero"     */
matriz[0][0]='T';
matriz[0][1]='C'; 
matriz[0][2]='A';
matriz[0][3]='K'; 
matriz[0][4]='Q'; 
matriz[0][5]='A'; 
matriz[0][6]='C'; 
matriz[0][7]='T'; 
matriz[1][0]='P'; 
matriz[6][0]='P'; 
matriz[7][0]='T'; 
matriz[7][1]='C'; 
matriz[7][2]='A'; 
matriz[7][3]='K'; 
matriz[7][4]='Q'; 
matriz[7][5]='A'; 
matriz[7][6]='C'; 
matriz[7][7]='T'; 

printf("tablero de ajedrez\n\n");
/*ciclo para imprimir las posiciones de los peones ,que faltan*/
 for (c=0;c<8;c++)
  { 
matriz[1][c]='P'; 
matriz[6][c]='P'; 
  } 
  /*ciclo para imprimir las posiciones que faltan para los espacios en blanco*/
   for (f=2;f<6;f++)
     { 
       for (c=0;c<8;c++)
       { 
        matriz[f][c]='*'; //asignacion a la matriz
       } 
     } 
     /*ciclo para asi poder imprimir la matriz 8x8 con todas sus respectivas posiciones ya mencionadas*/
          for (f=0;f<8;f++)
          { 
                 for (c=0;c<8;c++)
                 { 
                  printf("%c  ",matriz[f][c]);
                  } 
              printf("\n\n");
              /* salto de linea para que no se junte lo de abajo*/
          }   //termina el ciclo for
return 0;     // no retorna ningun valor
}  //termina el programa
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 4
void retornar_valor(int matriz[TAM][TAM]);//prototipo


void retornar_valor(int m[TAM][TAM])
/*funcion con parametros la varianble del   
  arreglo bidimensional con su tamaño de fila     
  y columna.                                   */
{
 int x,y;
     printf("\nIngresa la fila a encontrar:");
     scanf("%d",&x);//la fila que va a buscar
      printf("\nIngresa  la columna a encontrar:");
     scanf("%d",&y);//su columna que va a buscar
     
     printf("\nEl valor de la posicion ingresada [%d][%d] = %d\n",x,y,m[x-1][y-1]);
     /*Aqui la matriz va a imprimir lo que halla 
        ingresado el usuuario en X y Y ,en la 
        pantalla se imprimira lo que haya dicho 
        el usuario menos uno */
}


int main()//funcion principal
{
  int matriz[TAM ][TAM];/*={  {10 ,20, 30},
                                                    {40 ,50, 60},
                                                    {70, 80, 90}   };*/
  int i,j;//variables que se utilizaran para los ciclos for
  int num;
  srand(time(NULL));
  
  printf("\n   ****** MATRIZ ******\n\n");

  for (i=0;i<TAM;i++)
  /*En este for controla las filas*/
  {
     for (j=0;j<TAM;j++)
      /*Este for controla las columnas*/
     {
       num=rand()%50+10;
       matriz[i][j]=num;
   	printf( "[%d]",matriz[i][j]);
   	/*muestra la matriz*/
     }
  printf("\n");
  }
	
  retornar_valor(matriz);
  /*funcion con su parametro el nombre del 
    arreglo bidimensional sin su tamaño.  */ 
 
return 0;
}

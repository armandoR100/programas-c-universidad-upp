#include <stdio.h>
#define TAM 40 //El tamaño de la cadena 
int consonantes(char p[TAM] );//prototipo

int consonantes(char p[TAM] )//Funcion entera con el parametro cadena junto a su taman�o
{
  int consonantes=0, j;//se declara un contador y un controlador del ciclo For

     for ( j=0; j<TAM; j++)//recorre la cadena
     {    
         switch ( p[j] ) //verifica la cadena si hay consonantes
         {
           case 'b':
           case 'c':
           case 'd':
           case 'f':
           case 'g':
           case 'h':
           case 'j':
           case 'k':
           case 'l':
           case 'm':
           case 'n': 
           case 'p':
           case 'q':
           case 'r':
           case 's':
           case 't':
           case 'v':
           case 'x':
           case 'y':
           case 'z':
           
           consonantes++;//aqui cuenta las consonantes
           
           break;//se cierran los casos
                    
           default://aqui no hace nada por  defecto
		   break;
         }    
     }
return consonantes;//retornara a la funcion principal en contador que ya anteriormente conto las consonantes
}

 int main()//funcion principal
 {
    char palabra[TAM];//declaracion de la cadena
   
    printf ("Ingrese una palabra u oracion con minusculas: ");
    gets (palabra);//lee la cadena
   
    printf("\nEn la palabra hay %d consonantes\n",consonantes(palabra));//retorna lo que tenga funcion y se imprime el resultado
 
 return 0;
 }

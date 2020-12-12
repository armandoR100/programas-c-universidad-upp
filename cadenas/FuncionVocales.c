#include <stdio.h>
#define TAM 40 //El tamaño de la cadena 
int vocales(char p[TAM] );//prototipo

int vocales(char p[TAM] )//Funcion entera con el parametro cadena junto a su tamaño
{
  int sumar_vocal=0, j;//se declara un contador y un controlador del ciclo For

     for ( j=0; j<TAM; j++)//recorre la cadena
     {    
         switch ( p[j] ) //verifica la cadena
         {
           case 'a':
           case 'e':
           case 'i':
           case 'o':
           case 'u':
           sumar_vocal++;//en caso de encontrarse se incremenrara en uno en uno
           break;//se cierran los casos
                    
           default://aqui no hace nada,solo es para seguir con la estructura de Switch
           break;
         }    
     }
return sumar_vocal;//retornara a la función principal en contador que ya anteriormente conto las vocales
}

 int main()//funcion principal
 {
    char palabra[TAM];//declaracion de la cadena
    
    printf(" VOCALES \n");	
   
    printf ("Ingrese una palabra u oracion: ");
    gets (palabra);//lee la cadena
   
    printf("\nEn la palabra hay %d vocales\n",vocales(palabra));//retorna lo que tenga función y se imprime el resultado
 
 return 0;
 }

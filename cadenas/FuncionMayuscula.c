/*Funcion leer cadena y contar mayúsculas*/
#include <stdio.h>
int mayusculas(char p[40]);//declaración de prototipo
#define TAM 40 

 int mayusculas(char p[TAM] ){//funcion entera la cual debera retornar algun valor,su parametro es la cadena mas su tamaño que tiene
     int i,sumar_letras=0;//declaracion de variables que ae utilizaran en esta función
     
     for (i= 0; i<TAM; i++)
     /* Este ciclo servira para ir recorriendo
     la cadena con un tamaño definido       */
     {
         switch ( p[i] ) //Aqui la cadena en la
         {               //posicion i ira 
          case 'A':      //verificando cada caso
          case 'B':      //los cuales tienen ya
          case 'C':      //definidas las letras
          case 'D':      //mayusculas y con 
          case 'E':      //ayuda de un contador
          case 'F':      //va a estar contando
          case 'G':      //las mayusculas y 
          case 'H':      //terminara hasta ver
          case 'I':      //un break
          case 'J':
          case 'K':
          case 'L':
          case 'M':
          case 'N':
          case 'O':
          case 'P':
          case 'Q':
          case 'R':
          case 'S':
          case 'T':
          case 'U':
          case 'V':
          case 'W':
          case 'X': 
          case 'Y': 
          case 'Z':
             sumar_letras++;
         break;
     
         default:
         break;
         }
     }
    // if(sum_letras>0){
     	
	 }
 return sumar_letras;//lo que regresara a la funcion principal sera el contandor 
 }


int main()
{
    char palabra[TAM];//se declara la cadena y su tamaño
   
    printf("\n**** Contador De Mayusculas ****\n\n");
   
    printf("Introduzca una palabra u frase: ");
    gets(palabra);//se guarda la cadena
   
    printf("\nEn la palabra que ingreso hay %d mayúsculas\n",mayusculas(palabra) );//retorna el contandor
   
    return 0;
}

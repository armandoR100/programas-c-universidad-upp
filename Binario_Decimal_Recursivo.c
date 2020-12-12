// ALUMNO: Armando Rafael Romero Juarez.
// MATERIA: Programacion Estructurada.
// PROGRAMA: Funcion Recursiva De Binario a Decimal.
// PROFESORA: Irianely Perez.
/* Esta funcion consiste en comparar si el nro.ingresado es diferente a 1,este hara la operacion correspondiente */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int Binario(int num, int n);

int Binario(int num, int n)
{
  int resultado=0;

   if ( num == 1 ) {
      return pow(2,n);
   } 
   else if ( num%2 ==  1 ) {
      resultado += pow(2,n);
   }
   n++;

 return resultado += Binario(num/10, n);
}

int main()
{
   int numero, exponente ,valor;
   // Ejemplos : (Nro.Binario = Nro.Decimal)
   // 1=1: 10=2:100=4: 1000=8: 10000 =16: 100000=32: 1000000=64: 10000000=128: 100000000=256:
   printf("ingresa un numero binario entero: ");
   scanf("%d",&numero); //  01111000=120: 1000000000=512: 1001100100=612:  
   
   valor = Binario(numero, exponente=0);
   
   printf("El Numero Binario Es ['%d'] ",valor );
    
   return 0;
}


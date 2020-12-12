#include<stdio.h>
#include<stdlib.h>
#include <cmath>

void binario(int num)
{
   int exp, digito, dec;
  
   printf("El numero en binario es: %2d\n",num); 
   exp=0;
   dec=0;
   while( (num/10) != 0 )
   {
           digito = num % 10;
           dec += digito * pow(2,exp);
           exp++;
           num=( num/10 );
   }
   dec += num * pow(2,exp);
  
   printf("y su numero en Decimal es: %2d\n",dec);
   
}

void Recursivo_Descendente(int n){
	
    printf("º %d º",n);
    
    if (n>0)
	{
      Recursivo_Descendente(n-1);	
	}
	
}

void Recursivo_Ascendente(int n){
	
    printf("º %d º",n);
    
    if (n<10)
	{
      Recursivo_Ascendente(n+1);	
	}
	
        
}
 
int main(){
	
	printf("\nFuncion Recursiva en incremento\n\n");
	Recursivo_Ascendente(0);
	printf("\n\nFuncion Recursiva en Decremento\n\n");
	Recursivo_Descendente(10);
    printf("\n\nFuncion Iterativa Binario a Decimal\n\n");
	binario(101);
		
	return(0);
}


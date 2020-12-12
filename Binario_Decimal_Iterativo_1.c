// PROGRAMA: Numero Binario A Decimal De Forma Iterativa.
// ALUMNO: Armando Rafael Romero Juarez.
// MATERIA: Programacion Estructurada.
// PROFESORA: Irianely Perez.
/* Este programa convierte un numero de binario a decimal. */
#include<stdio.h>
//Ejemplos: 10100 = 20 , 101001 = 41 , 1001101 = 77, 1011100 = 92 , 1100100 = 100  
int main()
{	
	int binario,decimal,exp,residuo;
	
	printf("escriba un numero binario :");
	scanf("%d",&binario);
	exp = 1;
	decimal = 0;
	while( binario > 0 )
	{
	    residuo = binario % 10 ;
	    decimal = decimal+(residuo * exp);
	    binario = binario/10;
	    exp = exp*2;
	}
	printf("%d",decimal);
	
	return 0;
}

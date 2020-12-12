// PROGRAMA: Binario a decimal de forma iterativa 2.
// ALUMNO: Armando Rafael Romero Juarez.
// MATERIA: Programacion Estructurada.
// PROFESORA: Irianely Perez.
/* Este programa consiste en mostrar un nro. binario en forma decimal. */
#include<math.h>
#include<conio.h>
#include<stdio.h>
 
int main()
{
	int i , j ,tam, decimal=0 ;
	int  binario[ ]={ 1,1,1,1,1,1 };
    
    tam= sizeof (binario)/ sizeof (int);
    
     j=tam-1;
	for (i=0; i<tam; i++ )
	{
		decimal += binario[i]*pow(2, j) ;
	    j-- ;
	}
	printf("\nEl numero en decimal es '%i'  ",decimal);
   
	getch();
}


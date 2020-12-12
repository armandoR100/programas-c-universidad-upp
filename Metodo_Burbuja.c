// ALUMNO: Armando Rafael Romero Juarez.
// MATERIA: Programacion Estructurada.
// PROGRAMA: Metodo Burbuja.
// PROFESORA: Irianely Perez.
/* Este programa consiste en ordenar una serie de numeros desordenados de un arreglo. */
#include<stdio.h>
#include<conio.h>

void Mostrar_Arreglo(int array[],int tamanio ) 
{
 int i, j;

	for(i=0; i<tamanio; i++)
	{
		printf("[%d]", array[i] );
	}
}
	
void Bubble_Sort(int arreglo[],int n )
{	
 int i, j, aux;

	for(i=1; i<n; i++)
	{
		for(j=0; j<n-i; j++)
		{
			if( arreglo[j] > arreglo[j+1] )
			{
			    aux = arreglo[j];
				arreglo[j] = arreglo[j+1];
				arreglo[j+1] = aux;
			}
		}
	}	
}  
 
int main()
{
 int tam, a[ ]={15,26,8,99,2,10,55,7,0,3} ;
    
	printf("*** Metodo De Ordenacion Burbuja ***");
    tam = sizeof(a)/sizeof(int);
    printf("\n\n  - Arreglo Desordenado ........");
	Mostrar_Arreglo( a, tam );
	Bubble_Sort(a , tam ); 
	printf("\n\n  - Arreglo Ordenado ...........");
	Mostrar_Arreglo( a, tam );
	
 getch();
}

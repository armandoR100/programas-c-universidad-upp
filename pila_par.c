// ALUMNO :  Armando Rafael Romero Juarez
// INGENIERIA: ingenieria En Informatica
// MATERIA: Estructura De Datos
// PROGRAMA: PIla (Par & Impar)

#include<stdio.h>
#include<stdlib.h>
#define n 4
int base=-1,bpar=-1,bimpar=-1,i;
int pila[n];
int par[n];
int impar[n];

void push_impar(int impar[],int num)
{
	bimpar++;
	impar[bimpar]=num;
} 

void mostrar_impar(int impar[])
{
	for(i=0;i<=bimpar;i++)
	{
		printf("[%d]",impar[i]);
	}
}

void mostrar_par(int par[])
{
	for(i=0;i<=bpar;i++)
	{
		printf("[%d]",par[i]);
	}
}

void push_par(int par[],int num)
{
	bpar++;
	par[bpar]=num;
}

void push(int pila[],int num)
{
	if( base == n-1 ){
		printf("esta llena");
	}else{
		base++;
		pila[base]=num;
	}
}

int pop(int pila[ ])
{
  if( base == -1 ){
 	printf("esta vacia");
  }else{
    printf("eliminando[%i]",pila[base]);
    return pila[base--];	
  }
}

void mostrar(int pila[])
{
	for(i=0;i<base;i++)
	{
		printf("[%d]",pila[i]);
	}	
}

int main()
{
  int v;
  
        push(pila,1);push(pila,2);push(pila,3);push(pila,4); printf("\n");	
        mostrar(pila); printf("\n\n");
  for(i=0;i<n;i++)
  {
  	v=pop(pila); printf("\n");
  	  if(v%2==0)
      {
  	    push_par(par,v);
      }
      else
	  {
        push_impar(impar,v);  	
      }
  } 
  printf("\n\nPILA PAR\n");
  mostrar_par(par);
  printf("\nPILA IMPAR\n");
  mostrar_impar(impar);
  
 return 0;
}

// ALUMNO :  Armando Rafael Romero Juarez
// INGENIERIA: ingenieria En Informatica
// MATERIA: Estructura De Datos

#include<stdio.h>
#include<stdbool.h>
#define n 4

int i, valor, aux, base;
int ultimo = -1;
int limite = 0;

bool vacia(int cola[ ] )
{
	  if ( ultimo == -1 )
	  {
	  	return true;
	  }
	  else
	  {
	  	return false;
	  }
}
bool llena(int cola[] )
{
	if ( ultimo == n-1 )
	{
		return true;
	}
	else
	{
		return false;
	}
}

void linea( )
{
	printf("\n");
	for(i=0;i<30;i++){
	printf("_");
    }
}

void titulo( )
{	
	for(i=0;i<30;i++){
	printf("*");
    }
    printf("\n**\t Menu De Colas      **\n");
    for(i=0;i<30;i++){
	printf("*");
    }
}

void eliminar(int cola[] )
{ 
    if ( vacia(cola)  )
	{
	 printf("\n<<< La cola esta vacia>>>\n ");
    }
	else
	{
		base=0;
		limite--;
		ultimo--;
		printf("\n<<< Eliminando >>>\n");
	    printf("\n[%i]",cola[base] );
	    printf("\n\n");
			 
	    for (i=base; i<n ;i++)
	    {
	      aux=NULL;
	  	cola[i]=cola[i+1];
	  	cola[i+1]=aux;
	    }
	    
	}
}

void meter( int cola[] )
{
	if ( llena(cola) )
	{
	 printf("\n<<<  la Cola esta llena >>>\n");
	}
	else
	{
		printf("\n\tEscribir un numero: ");    
        scanf("%d",&valor);   
	    limite++;
		ultimo++;
	    cola[ultimo] = valor;
	    printf("\n\t<< ! Dato insertado ! >>\n\n");
    }
} 

void mostrar( int cola[] )
{
	printf("\n<<< Mostrando Cola >>>\n");
	for (i=base; i < limite ; i++)
	{
		printf("\n[%i]",cola[i] );
	}
	printf("\n");
}

int main()
{
  int cola[n];
  int opcion;
  
  do
  {
	titulo( );
    printf("\n1. Insertar");
    linea( );
    printf("\n2. Eliminar");
    linea( );
    printf("\n3. Mostrar");
    linea( );
    printf("\n4. Salir");
    linea( );
    printf("\nIngrese Una Opcion :");
	scanf("%d", &opcion);
	
    switch ( opcion )
    {
     case 1:  
        meter( cola );  
     break;
     
     case 2:  
        eliminar( cola );
     break;
     
     case 3:  
        mostrar( cola );
     break;
     
     case 4:  
        printf("\n <<< Saliendo >>> \n"); 
     break;
     
     default: 
        printf("\n<< ¡¡ Opcion No Valida !! >>\n");   
     break;
    }
  }while (opcion!=4);
   
  return 0;
}

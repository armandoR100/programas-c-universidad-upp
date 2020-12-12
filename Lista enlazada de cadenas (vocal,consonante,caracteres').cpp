// ALUMNO: Armando Rafael Romero Juarez
// MATERIA: Estructura De Datos
// PROGRAMA: Lista enlazada de cadenas (vocal,consonante,caracteres')

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

struct nodo
{
   char valor;        
   nodo *siguiente; 
};
typedef nodo *TipoLista; 

int  ListaVacia( TipoLista lista );         
void Insertar( TipoLista &lista, int numero ); 
void MostrarLista( TipoLista lista ); 

void MostrarLista( TipoLista lista )
{
   TipoLista nodo = lista;

   if( ListaVacia( nodo ) ) 
   {
     printf(" !.. Lista vacia ..! \n");
   }  
   else 
   {
      while( nodo ) 
	  {
         printf("%c->", nodo->valor);
         nodo = nodo->siguiente;
      }
      printf("\n");
   }
}

void Insertar( TipoLista &lista, int numero )
{
   TipoLista nuevo;
   nuevo = new(struct nodo);
   nuevo->valor = numero;
   nuevo->siguiente = lista;
   lista = nuevo;
}

int ListaVacia( TipoLista lista )
{
   return (lista == NULL);
}

int main()
{
   TipoLista vocal = NULL; 
   TipoLista consonante = NULL;
   TipoLista caracter_especial = NULL;
   int opcion,i=0,e;
   int voc=0,cons=0,carac=0;
   char palabras[100];
   
   printf("Ingrese frases o palabras con minusculas: ");
   gets(palabras);
   
   i=0;
	while ( palabras[i] != '\0' )//cuenta los espacios de a cadena
	{
     i++;
    }
    
   for (e=0;e<i;e++)
   {
      if ((palabras[e]=='a') || (palabras[e]=='e') || (palabras[e]=='i') || (palabras[e]=='o') || (palabras[e]=='u'))
      {
        Insertar( vocal  , palabras[e]  );
        voc++;
      }else if ((palabras[e]==' ' )||(palabras[e]=='*')||(palabras[e]=='@' ) || (palabras[e]==':')||(palabras[e]=='$')||(palabras[e]=='%')||(palabras[e]=='#') || (palabras[e]=='&')||(palabras[e]=='-')||(palabras[e]=='+')||(palabras[e]==':')||(palabras[e]==';')||(palabras[e]=='!')||( palabras[e]=='?'))
      {
         Insertar( caracter_especial , palabras[e]  );
         carac++;
      }
      else
      {
        Insertar( consonante, palabras[e]);
        cons++;
       }
   }
  
   do
   {
 	system("cls");
 	printf("\n-- MENU PRINCIPAL DE LA LISTA ENLAZADA -- \n\n");
    printf(" 1.- Mostrar Listas      \n");
    printf(" 2.- Salir                       \n");
    printf("\n Ingrese una opcion: ");
    scanf("%d",&opcion);
   
      switch(opcion)
      {    
        case 1: 
            printf("\nlista vocal\n" );
		    MostrarLista( vocal );       
		    printf("\nlista consonante\n" );
		    MostrarLista( consonante );       
		    printf("\nlista de caracteres especiales\n ");
		    MostrarLista( caracter_especial );
		    printf(" \n\n la palabra es : %s ", palabras);
		    printf(" \n\n el nro de vocales son : %i", voc );
		    printf(" \n\n el nro de consonantes son : %i", cons );
            printf(" \n\n el nro de caracteres especiales son : %i",carac );
             getchar( );
             getch();
        break; 
		      
        case 2: 
		   printf(" \n  !! Good Bye -('-')- !! \n ");
        break;
       
        default: printf(" \n!.. Ha ocurrido un error  ...!\n");
      }
   }while( opcion != 2  );
 
 getch();
}

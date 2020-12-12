#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
 
struct nodoArbol { 
   nodoArbol *ptrIzq;
   nodoArbol *prtDer;
   int dato;
}; 
typedef struct nodoArbol NodoArbol; 
typedef NodoArbol *ptrNodoArbol;
 
void insertaNodo(ptrNodoArbol *ptrArbol, int valor);
void inOrden(ptrNodoArbol ptrArbol);
void preOrden(ptrNodoArbol ptrArbol);
void postOrden(ptrNodoArbol ptrArbol);
void mostrar(ptrNodoArbol ptrArbol,int cont);
 
void insertaNodo( ptrNodoArbol *ptrArbol, int valor )
{ 
   if ( *ptrArbol == NULL ) {   
      *ptrArbol = (NodoArbol*) malloc( sizeof(NodoArbol));
      if ( *ptrArbol != NULL ) { 
         (*ptrArbol)->dato = valor;
         (*ptrArbol)->ptrIzq = NULL;
         (*ptrArbol)->prtDer = NULL;
      }
      else {
         printf( "no se inserto %d. No hay memoria disponible.\n",valor);
      }
   }
   else {
   		if (valor < (*ptrArbol )->dato) {
         	insertaNodo(&((*ptrArbol)->ptrIzq),valor);
      	}
      	else 
		  	if (valor > (*ptrArbol)->dato) {
         		insertaNodo(&((*ptrArbol)->prtDer),valor);
      		}
      		else {
         		printf("dup");
      		}
   		}
}
void inOrden( ptrNodoArbol ptrArbol )
{ 
   if ( ptrArbol != NULL ) { 
      inOrden(ptrArbol->ptrIzq);
      printf( "|%3d|", ptrArbol->dato );
      inOrden( ptrArbol->prtDer );
   }
 
}
void preOrden( ptrNodoArbol ptrArbol )
{ 
   if ( ptrArbol != NULL ) { 
      printf( "|%3d|", ptrArbol->dato );
      preOrden( ptrArbol->ptrIzq );
      preOrden( ptrArbol->prtDer );
   }
}
void postOrden( ptrNodoArbol ptrArbol )
{ 
   if ( ptrArbol != NULL ) { 
      postOrden( ptrArbol->ptrIzq );
      postOrden( ptrArbol->prtDer );
      printf( "[%3d]", ptrArbol->dato );
   }
}

void mostrar(ptrNodoArbol pt,int cont){

  if ( pt != NULL ) { 
   mostrar(pt->prtDer,cont+1);
   for(int i=0;i<cont;i++){
   printf("+++");
   }
    printf("%d\n\n",pt->dato);
    mostrar(pt->ptrIzq,cont+1);
  }

}

int main()
{ 
   int i,elemento,contador=0;
   ptrNodoArbol ptrRaiz = NULL;
 
   srand(time( NULL )); 
   printf("Los numeros colocados en el arbol son:\n" );
 
   for (i = 1; i <= 9; i++) { 
      printf("ingresa numero:");scanf("%d",&elemento);
      //elemento = rand() % 10;
      //printf(" (%d) ",elemento);
      insertaNodo(&ptrRaiz, elemento);
   }

   printf("\n\nEl recorrido en preorden es:\n");
   preOrden(ptrRaiz);
   printf("\n\nEl recorrido inorden es:\n");
   inOrden(ptrRaiz);
   printf("\n\nEl recorrido en postOrden es:\n");
   postOrden(ptrRaiz);

   printf("\nmostrando\n\n\n\n");
   mostrar(ptrRaiz,contador);
   
getch();
return 0;
}


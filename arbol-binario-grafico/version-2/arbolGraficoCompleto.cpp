/*
  ARMANDO RAFAEL ROMERO JUAREZ
  ESTRUCTURA DE DATOS
  ARBOL BINARIO RECORRIDOS
*/
#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#define TAM 10
#define ANCHO 700
#define ALTO 600

struct nodo{ 
   nodo *Izq;
   nodo *Der;
   int   dat;
}; 
typedef struct nodo NODO; 
typedef NODO *ARBOL;
 
void insertaNodo(ARBOL *puntero1, int valor);
void inOrden(ARBOL puntero2);
void preOrden(ARBOL puntero3);
void postOrden(ARBOL puntero4);
void Mostrar_Arbol(ARBOL pt,int cont);
void ArbolGrafico(ARBOL Raiz,int c,int yy,int i);
void paisaje();
char cad[TAM][TAM];
void InGrafico(ARBOL Raiz,int c,int yy,int i);
void PosGrafico(ARBOL Raiz,int c,int yy,int i);

void InGrafico(ARBOL Raiz,int c,int yy,int i)
{ 
 srand(time(NULL));
 i=0;

   if ( Raiz != NULL ) { 
      InGrafico( Raiz->Izq ,c-=50,yy+=30,i  );
      sprintf(cad[i], "%d",Raiz->dat );
       delay(500);    
       
       setcolor(14);circle(c,yy,16);delay(100);
       setcolor(10);circle(c,yy,17);delay(100);
       setcolor(13);circle(c,yy,18);delay(100);
       setcolor(11);circle(c,yy,19);delay(100);
       
       setcolor(15);
       circle(c,yy,20);
       outtextxy(c,yy,cad[i]);
       delay(500);
       i++;
       InGrafico( Raiz->Der ,c+=110,yy,i );
   }
}

void PosGrafico(ARBOL Raiz,int c,int yy,int i)
{ 
 srand(time(NULL));
 i=0;

   if ( Raiz != NULL ) { 
       PosGrafico( Raiz->Izq ,c-=50,yy+=30,i  );
       PosGrafico( Raiz->Der ,c+=110,yy,i );
       sprintf(cad[i], "%d",Raiz->dat );
       delay(500);    
       
       setcolor(14);circle(c,yy,16);delay(100);
       setcolor(10);circle(c,yy,17);delay(100);
       setcolor(13);circle(c,yy,18);delay(100);
       setcolor(11);circle(c,yy,19);delay(100);

       setcolor(15);
       circle(c,yy,20);
       outtextxy(c,yy,cad[i]);
       delay(500);
       i++;
   }
}

void paisaje()
{
  srand(time(NULL));
  int aleaX,aleaY,aleaC,pixel=900,colorMax=16;

  for(int y=0;y<pixel;y++)
  {
    aleaX=rand()%1001;
    aleaY=rand()%401;
    aleaC=rand()%colorMax;
    putpixel( aleaX, aleaY, aleaC );
  }
}

void Mostrar_Arbol(ARBOL pt,int cont)
{
  if ( pt != NULL ) { 
   Mostrar_Arbol(pt->Der,cont+1);
   for(int i=0;i<cont;i++){
   printf("   ");
   }
    printf("%i \n",pt->dat);
    Mostrar_Arbol(pt->Izq,cont+1);
  }
}
void ArbolGrafico(ARBOL Raiz,int c,int yy,int i)
{ 
 srand(time(NULL));
 i=0;

   if ( Raiz != NULL ) { 
      sprintf(cad[i], "%d",Raiz->dat );
       delay(500);    
       
       setcolor(14);circle(c,yy,16);delay(100);
       setcolor(10);circle(c,yy,17);delay(100);
       setcolor(13);circle(c,yy,18);delay(100);
       setcolor(11);circle(c,yy,19);delay(100);
       
       setcolor(15);
       circle(c,yy,20);
       outtextxy(c,yy,cad[i]);
       delay(500);
       i++;
      ArbolGrafico( Raiz->Izq ,c-=50,yy+=30,i  );
      ArbolGrafico( Raiz->Der ,c+=110,yy,i );
   }
}

void insertaNodo( ARBOL *puntero1, int valor )
{ 
   if ( *puntero1 == NULL ) 
   {   
    *puntero1 = (NODO*)malloc(sizeof(NODO));
      if (*puntero1 != NULL ) 
      { 
         (*puntero1)->dat = valor;
         (*puntero1)->Izq = NULL;
         (*puntero1)->Der = NULL;
      }
      else {
         printf( "No se inserto %d , No hay memoria disponible.\n",valor);
      }
   }
   else {
   	    	if ( valor < (*puntero1 )->dat ) 
            {
         	  insertaNodo(&((*puntero1)->Izq),valor);
      	    }
      	    else 
		  	    if ( valor > (*puntero1)->dat ) {
         	    	insertaNodo(&((*puntero1)->Der),valor);
      		    }
      		    else {
         		   printf("dup");
      	    	}
   		}
}
void inOrden(ARBOL puntero2)
{ 
   int i=0;
   if ( puntero2 != NULL ) { 
      inOrden(puntero2->Izq);
      printf( "%3d", puntero2->dat );
      inOrden( puntero2->Der );
   } 
}
void preOrden(ARBOL puntero3)
{ 
   if ( puntero3 != NULL ) { 
      printf( "%3d", puntero3->dat );
      preOrden( puntero3->Izq );
      preOrden( puntero3->Der );
   }
}
void postOrden(ARBOL puntero4)
{ 
   if ( puntero4 != NULL ) { 
      postOrden( puntero4->Izq );
      postOrden( puntero4->Der );
      printf( "%3d", puntero4->dat );
   }
}

int main()
{ 
   int i,valor,opcion,contador=0;
   int ejeX=350,ejeY=40;
   ARBOL Raiz=NULL;
 
    printf("Los numeros colocados en el arbol son:\n" );
    for (i=0;i<TAM;i++) 
    { 
      printf("Ingresa el numero %i :",i+1);
      scanf("%d",&valor);
      insertaNodo(&Raiz, valor);
    }
   
    do{ 
       system("cls");
       printf("\n\n\n ---- MENU ---- \n");
       printf("\n1.- mostrar todo");
       printf("\n2.- GRAFICO PRE-ORDEN");
       printf("\n3.- GRAFICO POST-ORDEN");
       printf("\n4.- GRAFICO IN-ORDEN");
       printf("\n5.- Salir");
       printf("\nEscoge una opcion :");
       scanf("%d",&opcion);
       switch(opcion)
       {
         case 1:
                printf("\n\n--- Ordenamiento en Inorden ---\n");   
                inOrden(Raiz);
                printf("\n\n--- Ordenamiento en PostOrden ---\n"); 
                postOrden(Raiz);
                printf("\n\n--- Ordenamiento en Preorden ---\n");  
                preOrden(Raiz);
                printf("\n\n--- arbol con printf's ---\n"); 
                Mostrar_Arbol(Raiz,contador);
                getchar();
                getchar();
            break;
         case 2:
                initwindow(ANCHO,ALTO);
                paisaje();
                ArbolGrafico(Raiz,ejeX,ejeY,i);
                getchar();
                getchar();
                closegraph();
            break;
         case 3:
                cleardevice();
                initwindow(ANCHO,ALTO);
                ejeX=350,ejeY=40;
                PosGrafico(Raiz,ejeX,ejeY,i);
                getchar();
                getchar();
                closegraph();
            break;
         case 4:
                cleardevice();
                initwindow(ANCHO,ALTO);
                ejeX=350,ejeY=40;
                InGrafico(Raiz,ejeX,ejeY,i);
                getchar();
                getchar();
                closegraph();
            break;
         default:
                 printf("\n!!!....opcion incorrecta.....!!!\n");
                 printf("Vuelva a ingresar otra opcion porfavor *-* ");
         getch();
        }
    }while(opcion!=5);

  getch();
  return 0;
}

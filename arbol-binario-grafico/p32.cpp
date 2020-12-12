#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <conio.h>
#include <time.h>
#define TAM 5

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
void Mostrar_Arreglo(int vector[]);
void mostrarA(ARBOL pt,int cont);
void p(ARBOL Raiz,int c,int yy,int i);
void graf(int vector[]); 
char cad[TAM][TAM];
void mostrar(ARBOL pt,int cont,int vec[],int x,int y);

void mostrar(ARBOL pt,int cont,int vec[],int x,int y)
{
  char cad[TAM]; 
  //char *cad=new char;

  initwindow(400,400);

  if ( pt != NULL ) { 
   mostrar(pt->Der,cont+1,vec,x+=50,y+=50);
   for(int i=0;i<cont;i++){
   printf("   ");
   }
    printf("[%i]\n",pt->dat);
    mostrar(pt->Izq,cont+1,vec,x-=50,y-=50);
  }
    sprintf(cad, "%d", pt->dat);
    //itoa(pt->dat, cadena, 10);
    setcolor(14);
    setfillstyle(5,14);
    circle(x+=40,y,20);
    floodfill(x,y,14);
    outtextxy(x,y,cad);

  system("pause");
  closegraph();
}
void graf(int vector[])
{
int cox=200,coy=40,cx=200,cy=40,color;
initwindow(400,400);
srand(time( NULL )); 

   setcolor(14);
   sprintf(cad[0],"%d",vector[0] );
   outtextxy(cox,coy,cad[0]);
   circle(cox,coy,20);
   for(int i=1;i<TAM;i++){
    sprintf(cad[i],"%d",vector[i] );
     if(vector[i]<vector[0]){
      cox-=30,coy+=30;
      setcolor(14);
      outtextxy(cox,coy,cad[i]);
      color=rand()%16;
      setcolor(color);
      circle(cox,coy,20);
      delay(800);
     }
     else{
       cx+=30,cy+=30;
       setcolor(14);
       outtextxy(cx,cy,cad[i]);
       color=rand()%16;
       setcolor(color);
       circle(cx,cy,20);
       delay(800);
     }
   }
getch();
closegraph();
} 

void mostrarA(ARBOL pt,int cont)
{
  if ( pt != NULL ) { 
   mostrarA(pt->Der,cont+1);
   for(int i=0;i<cont;i++){
   printf("   ");
   }
    printf("%i \n",pt->dat);
    mostrarA(pt->Izq,cont+1);
  }
}
void p(ARBOL Raiz,int c,int yy,int i)
{ 
  i=0;
  initwindow(400,400);
   if ( Raiz != NULL ) { 
      sprintf(cad[i], "%d",Raiz->dat );
       delay(500);
       setcolor(10);
       circle(c,yy,20);
       outtextxy(c,yy,cad[i]);
       delay(500);
       i++;
      p( Raiz->Izq ,c-=50,yy+=50,i  );
      p( Raiz->Der ,c+=50,yy,i );
   }
  closegraph();
}

void Mostrar_Arreglo(int vector[]){
  for(int i=0;i<TAM;i++){
      printf("[%d]",vector[i]);
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
   system("color 0e");
   int i,valor,opcion;
   int vector[TAM];
   ARBOL Raiz = NULL;
 
   printf("Los numeros colocados en el arbol son:\n" );
   for (i=0;i<TAM;i++) 
   { 
      printf("Ingresa el numero %i :",i+1);
      scanf("%d",&valor);
      vector[i]=valor;
      insertaNodo(&Raiz, valor);
   }

    do{ 
       system("cls");
       printf("\n\n\n ---- MENU ---- \n");
       printf("\n1.- mostrar todo");
       printf("\n2.- IN-ORDEN");
       printf("\n3.- POST-ORDEN");
       printf("\n4.- PRE-ORDEN");
       printf("\n5.- GRAFICO");
       printf("\n6.- 2do.intento.GRAFICO");
       printf("\n7.- 3er.intento.GRAFICO");
       printf("\n8.- Salir");
       printf("\nEscoge una opcion :");
       scanf("%d",&opcion);
       switch(opcion)
        {
         case 1://mostrar todo  
                 mostrarA(Raiz,0);
                 system("pause");
            break;
         case 2://in-orden
                 printf("\n\n--- Inorden ---\n");   
                 inOrden(Raiz);
                 getchar();
                 getchar();
            break;
         case 3://post-orden 
                 printf("\n\n--- PostOrden ---\n"); 
                 postOrden(Raiz);
                 getchar();
                 getchar();
            break;
         case 4://pre-orden
                 printf("\n\n--- Preorden ---\n");  
                 preOrden(Raiz);
                 getchar();
                 getchar();
            break;
         case 5://grafico
                 graf(vector); 
            break;
         case 6:
                 p(Raiz,200,40,i);
                 getchar();
                 getchar();
            break;
        case 7:
                 mostrar(Raiz,0,vector,200,100);
                 getchar();
                 getchar();
            break;
        }
    }while(opcion!=8);

getch();
return 0;
}

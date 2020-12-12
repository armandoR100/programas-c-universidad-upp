// ALUMNO: Armando Rafael Romero Juarez
// MATERIA: Estructura De Datos
// PROGRAMA: Lista enlazada de pares & impares

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
struct nodo
{
   int valor;        
   nodo *siguiente; 
};
typedef nodo *TipoLista; 

int  ListaVacia( TipoLista lista );         
void Insertar( TipoLista &lista, int numero ); 
void MostrarLista( TipoLista lista );              
void VaciarLista( TipoLista &lista );
void Insertar_200_Nros( TipoLista &listaPrincipal, TipoLista &listaPar, TipoLista &listaImpar );

void Insertar_200_Nros( TipoLista &listaPrincipal, TipoLista &listaPar, TipoLista &listaImpar )
{	
   srand(time(NULL)); //Genera aleatorio
   int i,numero;
   printf("\n<< INSERTANDO LOS 200 NUMEROS >>\n\n");
   for (i=0;i<200;i++)
   {
      numero = rand()%256;
      Insertar(listaPrincipal,numero); //inserta los 200 nros a una lista
        	     
         if ( numero%2 == 0   )
         {
        	Insertar( listaPar,numero ); //inserta a la lista par
         }
         else
         {
        	Insertar( listaImpar,numero ); //inserta a la lista par
         }
   }
getchar();
}

void VaciarLista(TipoLista &lista)
{
   TipoLista nodo;

   if( lista != NULL )
   {
      while( lista != NULL )
      {
         nodo = lista;
         lista = lista->siguiente;
         delete( nodo );
      }
   }
   else
   {
      printf(" !.. Lista vacia ..! \n");
   }
}

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
         printf("%d->", nodo->valor);
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
   TipoLista lista = NULL; //Inicio de listas en Nulo
   TipoLista lista_Par = NULL; //inicio de lista par en Nulo
   TipoLista lista_Impar = NULL; //Inicio de lista impar en Nulo
   int opcion1, opcion2 ,opcion3 ;
  
   Insertar_200_Nros( lista,lista_Par,lista_Impar); //funcio de 200 nros aleatorios

   do
   {
   	system("cls");
 	printf("\n-- MENU PRINCIPAL DE LA LISTA ENLAZADA -- \n\n");
    printf(" 1.- Menu Para Mostrar Listas                 \n");
    printf(" 2.- Vaciar Todas Las Listas                  \n");
    printf(" 3.- Insertar otros 200 nros aleatorios       \n");
    printf(" 4.- Salir                                    \n");
    printf("\n Ingrese una opcion: ");
    scanf("%d",&opcion1);
   
      switch(opcion1)
      {
        case 1: //mostrar la lista
          do{
          	system("cls");
            printf("\n --- MENU PARA MOSTRAR LISTAS ---\n");
            printf("1.- Mostrar Lista Con Los 200 Nros \n");
            printf("2.- Mostrar Lista Par              \n");
            printf("3.- Mostrar Lista Impar            \n");
            printf("4.- Regresar                       \n");
            printf("\n Ingrese Una Opcion : \n");
            scanf("%i",&opcion2);
  
               switch(opcion2 ) //menu de listas
               {
              	case 1: //mostrar lista
           	            printf("\n << LISTA >> \n\n");
                        MostrarLista( lista );
                        getch();
                        getchar();
              	break; //fin del caso 1
           	
              	case 2: //mostrar la lista par
           	            printf("\n << LISTA PAR >> \n\n");
                        MostrarLista( lista_Par );
                        getch();
                        getchar();
           	    break; // fin del caso 2
           	
              	case 3: //mostrar la lista impar
           	            printf("\n << LISTA IMPAR >> \n\n");
                        MostrarLista( lista_Impar );
                        getch();
                        getchar();
           	    break; // fin del caso 3
				                                                  
               } //fin del switch del menu para mostrar listas
           }while (opcion2 !=4 ); //menu de mostrar las listas
        break; //fin del caso nro 1 del menu principal
           
        case 2: //vacia la lista  
            printf("\n << VACIANDO LISTA >>       \n\n");
            printf("\n << VACIANDO LISTA PAR >>   \n\n");
            printf("\n << VACIANDO LISTA IMPAR >> \n\n");
            VaciarLista( lista_Par );
	        VaciarLista( lista_Impar );
		    VaciarLista( lista );       
            getch();
            getchar();
        break; //fin del caso 2 del menu principal
      
        case 3: //insertar 200 nros mas
        	Insertar_200_Nros( lista,lista_Par,lista_Impar);
        break; //fin del caso 3 del menu principal
      
        case 4: //salir
		   printf(" \n  !! Good Bye -('-')- !! \n ");
        break;
       
       default: printf(" \n!.. Ha ocurrido un error en su opcion ...!\n");
      }
   
   }while( opcion1 != 4  );
 
 getch();
}

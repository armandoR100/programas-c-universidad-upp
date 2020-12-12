// ALUMNO:ARMANDO RAFAEL ROMERO JUAREZ
// MATERIA:ESTRUCTURA DE DATOS
// TRABAJO:EJERCICIO DE MENU DE PILA (PUSH & POP)
#include<stdio.h>
#include<stdlib.h>
#define TAM 10
int stack=-1;

int push(int pila[TAM]);
void pop(int pila[TAM]);
void mostrar(int pila[TAM]);
bool vacia(int pila[TAM]);
bool llenar(int pila[TAM]);

	bool vacia(int pila[TAM]){
	    
		if( stack == -1 ){
	      return 1;
	    }
	    else{
	      return 0; 
		}
	}
	
	bool llenar(int pila[TAM]){
	   if( stack == TAM-1 ){
	        return 1;
	   }  
	   else{
	        return 0; 
	   }
	}

	void mostrar(int pila[TAM]){
	  int i;
	  
		if( vacia(pila) == 1 ){
			printf("\nLa pila esta vacia \n");
     	}
		else{
			
	     	for( i=0; i<=stack; i++ ){
	     	printf("\nEl elemento [%d] de la pila es %d \n", i+1, pila[i]);
	        printf("--------------------------");
			}
	    }
	}
	
	void pop(int pila[TAM]){
	    
		if( vacia(pila) == 0 ){    	
		    printf("\nSacando el elemento %d de la pila\n", pila[stack--] );
		    printf("--------------------------");
	    }     
	    else{
	        printf("\nLa pila esta vacia \n");
	    }
    }
	
	int push(int pila[TAM]){
		
	    if( llenar(pila) == 0 ){
	    	printf("\n**** Guarda un elemento ****\n");
	    	printf("Escribe un numero: ");
	    	scanf( "%d", &pila[++stack] );
	        printf("--------------------------");
			printf("\n");
		} 
	    else{
	    	printf("\nLa pila esta llena\n");
	    }
	}         

int main(){
  int opcion, pila[TAM];
  
    do{
	    printf("\n---- Menu De Pilas ----");
	    printf("\n| 1.- Push             |");
	    printf("\n| 2.- Pop              |");
	    printf("\n| 3.- Mostrar          |");
	    printf("\n| 4.- Salir            |");
	    printf("\n------------------------");
	    printf("\n Ingrese una opcion: ");
	    scanf("%i",&opcion);
	    printf("--------------------------");
	                           
	    switch(opcion) 
	    {
	        case 1: 
			   push(pila);  
		    break;
		
	        case 2:
			   pop(pila);
			break;
	           
	        case 3: 
			   mostrar(pila); 
			break;
	           
	        default: 
     		   printf("\n\n\tSaliendooo.....\n");
			break;
	       }
	       
    }while(opcion!=4);
    
	return 0;  
}      

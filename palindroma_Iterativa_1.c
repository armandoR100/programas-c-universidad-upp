// PROGRAMA: Palindromo iterativa.
// ALUMNO: Armando Rafael Romero Juarez.
// MATERIA: Programacion Estructurada.
// PROFESORA: Irianely Perez.
/* Este programa consiste en verificar si una palabra es palindromo con el ciclo for y con un contador y la inversion de la palabra. */
#include<stdio.h>
#include<conio.h>
int main(){
	
	char a[]={'a','n','i','t','a','l','a','v','a','l','a','t','i','n','a' };
	//char a[]={ 'r','o','t','o','r'  };
	//char a[]={ 'o','s','o' };
	//char a[]={  'p','e','r','r','o'  };
	//char a[]={  'm','o','t','o','r'  };
	//char a[]={  'r','e','i','r'  };
	//char a[]={  'l','a',' ','n','a'  };
	int n,c,cont=0,i;
	n=sizeof(a)/sizeof(char) ;//obtiene el numero de caracteres de la cadena
	char b[n];
	printf("--- PALINDROMA ---");
	c=n;
	//asigna la cadena a otra cadena en forma inversa
	printf("\nCADENA ORIGINAL \n");
	for(i=0;i<n;i++){
		printf("[%c]",a[i] );
		b[c-1]=a[i];
	    c--;
	}
	
	// Muestra Palabra inversa
	printf("\nCADENA INVERSA ");
	printf("\n");
	for(i=0;i<n;i++){
		printf("[%c]",b[i] ); 
	}
    //Verifica si son iguales
	for(i=0;i<n;i++){
	   
	   if( a[i]==b[i] ){
	   	    cont++;
	   }else{
	   	    cont--;
	   }
	}
	//si el contador es igual al tamanio es palindroma
	if(cont == n ){
		printf("\n\nLa Palabra Es Palindromo (^_^) ");
	}else{
		printf("\n\nLa Palabra No Es Palidromo (-_-) ");
	}
	
	getch();//se detiene hasta que el usuario teclee cualquier letra
}

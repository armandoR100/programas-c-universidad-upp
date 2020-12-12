#include<stdio.h>
void unir_cadena(char a[10],char b[10] );//prototipo

 void unir_cadena(char a[10],char b[10]){
/*esta funcion no retornara ningun valor ,tiene como 
parametros la cadena uno y la cadena 2 junto a su tamaño */
    printf("\n\n-----uniendo cadenas-----\n\n");

    printf("La union de las cadenas es %s %s",a,b);//aqui pues imprime directamente las 2 cadenas en un mismo printf
    
 }


 int main()//funcion principal
 {
	char palabra[10],palabra2[10];//declaracion de cadenas
	
    printf ("ingrese una palabra:");
    gets (palabra);//lee 1ra cadena
    
    printf ("ingrese otra palabra:");
    gets (palabra2);//lee 2da cadena
    
    printf("\nLa 1ra oracion original es %s\n",palabra);//muestra la primera cadena 
    
    printf("\nLa 2da oracion original es %s\n",palabra2);//muestra la segunda cadena
    
    unir_cadena(palabra,palabra2);//Funcion
    
 return 0;
 }


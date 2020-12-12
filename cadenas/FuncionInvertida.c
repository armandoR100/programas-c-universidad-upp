#include<stdio.h>
void cadena(char cad[10] );//prototipo.

void cadena(char cad[10] )//funcion sin retorno con parametro la cadena junto a su tamaño.
{
   char cad2[10];//se declara una variable con el mismo tamaño que la cadena.

      printf("\n-- pasando a otra cadena --\n");
         
    cad2[0]=cad[0]; // Aqui se le va asignando 
    cad2[1]=cad[1]; // el caracter que tenga 
    cad2[2]=cad[2]; // cada posición de la
    cad2[3]=cad[3]; // cadena a otra variable
    cad2[4]=cad[4]; // la cual tiene el mismo
    cad2[5]=cad[5]; // tamaño y misma posición.
    cad2[6]=cad[6];
    cad2[7]=cad[7];
    cad2[8]=cad[8];
    cad2[9]=cad[9];
    
      printf("\n-----convirtiendo-----\n");
   
    cad[0]=cad2[9]; // Ahora la cadena original
    cad[1]=cad2[8]; // con su posicion empezando
    cad[2]=cad2[7]; // desde cero va a ser igual
    cad[3]=cad2[6]; // con la ultima posición
    cad[4]=cad2[5]; // de la otra variable y asi
    cad[5]=cad2[4]; // seguidamente y asi se ira
    cad[6]=cad2[3]; // invirtiendose.
    cad[7]=cad2[2];
    cad[8]=cad2[1];
    cad[9]=cad2[0];
    
   printf("la frase invertida es [%c%c%c%c%c%c%c%c%c%c] \n",cad[0],cad[1],cad[2],cad[3],cad[4],cad[5],cad[6],cad[7],cad[8],cad[9] );
    
}

int main()//funcion principal.
{
	char palabra[10];//declaracion de cadena.
	
    printf ("ingrese una palabra como maximo 10 letras:");
    gets (palabra);//Lee la cadena.
    
    printf("\nLa frase original es %s\n",palabra);//Muestra la cadena.
    
    cadena(palabra);//funcion con su parametro la cadena.
    
return 0;
}


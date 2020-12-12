#include<stdio.h>
int verificar_cadena(char frase[20]);//prototipo

int verificar_cadena(char frase[20])
/* Funcion con parametro la cadena
   junto al tamaño                 */
{
   int f,contador=0;//declara un contador

   for (f=0;f<20;f++)
   {
   	/* recorre la cadena */
       if (frase[f]==' '){
       /* cada posicion de la cadena cuando 
          encuentre un espacio va a contar  */
     	contador++;
       }
   } 
   
   if (contador>0)
   /* Si el contador cuenta un espacio 
      aparecera mas cadenas,sino imprimira
      la oracion que no hay cadenas.      */
   {
     printf("\nSi hay mas cadenas");
   }
   else 
   {
     printf("\nNo hay cadenas dentro de esta oracion");
   }
       
return contador;//va a regresar el contador
}
	
 int main()//funcion principal
 {
  char palabras[20];//declaracion de cadenas
    
    printf("\n***** VERIFICAR SI SE ENCUENTRAN MAS CADENAS *****\n\n");
 
	printf("Escribe una oración con minusculas: ");
	gets(palabras);//lee la cadena
	
	printf("\n---- VERIFICANDO ----\n");

    verificar_cadena(palabras);//funcion con prototipo de la cadena
    
    printf("\n\n");

 return 0;
 }
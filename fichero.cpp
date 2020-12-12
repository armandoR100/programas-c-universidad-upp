#include <stdio.h>
#include <stdlib.h>
#define max 100

int vec[max], par[max], impares[max];

FILE *todo,*pares,FILE *impar;

int main()
{
 int i=0;
 
 todo = fopen("numeros.txt", "rt");
 pares = fopen("pares.txt","w");
 impar = fopen("num_impar.txt","w");

 if( (todo == NULL)&&(todo == NULL)||(todo == NULL) ) 
 {
    printf("El fichero no se ha podido abrir, no existe.");
 } 
 else 
 {
   	printf("Los ficheros existen y esta en la direccion: %p,%p,%p\n",todo,pares,impar);
 }
 

 do
 {
	fscanf(todo, "%i", &vec[i]);
    printf("[%i]",vec[i]);
    printf ("");
    	if (vec[i]%2==0){
			par[i]=vec[i];
    		fputc(par[i],pares);
		}
    	else{
			impares[i]=vec[i];
			fputc(impares[i],impar);
		}
    	i++;
 }while(!feof(todo));

 printf("\n\n");
 
 for (int i=0;i<max;i++)
 {
	printf("[%i]",par[i]);
	//fputc(par[i],pares);
 } 
 
 printf("\n\n");
 
 for (int i=0;i<max;i++)
 {
	printf("[%i]",impares[i]);
	//fputc(impares[i],impar);
 }

 fclose(todo);
 fclose(pares);
 fclose(impar);

system("pause");
return 1;
}

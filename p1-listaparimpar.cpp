#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define direccion1 "C:\\archivos_file\\numeros.txt"
#define direccion2 "C:\\archivos_file\\pares\\numeros_pares.txt"
#define direccion3 "C:\\archivos_file\\impares\\numeros_impares.txt"

FILE *f,*p,*ip;

main( )
{
	int archivo[100] , pares[100] , impares[100];
    int i=0, j=0, k=0, cont_impar=0 , cont_par=0;
 
    f = fopen(direccion1, "rt");
    p = fopen(direccion2,"w");
    ip = fopen(direccion3,"w");
     
    if (   (f == NULL) && (p==NULL) && (ip == NULL ) )
    { 
       printf("Los archivos no fueron creados %s ,%s ,%s \n",direccion1 ,direccion2 ,direccion3 );
     }
    else
    {
      printf("Los archivos han sido correctos y guardados en %s , '%s y %s \n\n",direccion1,direccion2,direccion3);
      do
      {
    	fscanf( f, "%d", &archivo[i] );
        printf( "[%d]", archivo[i] );
        i++;
        if (archivo[i]%2 == 0)
        {
            cont_par++;
      	    pares[i] = archivo[i];
    	    fputc( pares[i] , p );
	    }
        else
        {
      	    cont_impar++;
	    	impares[i] = archivo[i];
		  	fputc( impares[i], ip );
	    }
       }while( !feof(f) );

        printf("\n\nEl total de impares son : %d ",cont_impar);
        printf("\nNros Impares\n");
        for (j=0;j<100;j++)
        {
	        printf("[ %d ]",pares[j]);
        }
        printf("\n\nEl total de pares son : %d ",cont_par );
        printf("\nNros Pares\n");
        for (k=0;k<100;k++)
        {
	        printf("[ %d ]",impares[k]);
        }
           
      }

 fclose(f);
 fclose(p);
 fclose(ip);

 getch();
}

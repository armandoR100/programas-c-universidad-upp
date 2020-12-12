#include<stdio.h>
#include<string.h>
#define dir "E:\\files\\texto.txt"
#define LONG_PAL 30 
#define CANT_PAL 200

FILE *file;

int main()
{
	char palabras[CANT_PAL][LONG_PAL]={0};
	int TAM,count=0,i,PosPal=0;
	char word[25],respuesta,bandera='F';

    /* ABRE EL ARCHIVO Y LO LEE */
	file = fopen(dir, "r");

    /* GUARDA TODO EL CONTENIDO DEL ARCHIVO A UN ARREGLO */
	count=0;
	do
    {
      fscanf(file, "%s", palabras[count]);
      count++;
	}while( !feof(file) );

    /* MOSTRANDO EL TEXTO */
    printf("El texto es el siguiente:\n\n");
    for(i=0;i<count;i++)
    {
     printf("[%s]",palabras[i]);
    }

    do{
         /* INGRESA PALABRA A BUSCAR */
	    printf("\n\nEscribe Una Palabra A Buscar :");
	    scanf("%s",&word);
        /* BUSCA LA PALABRA EN EL ARREGLO */ 
	    TAM=count;  
	    i=0;
	    while( (bandera!='V')&&(i<TAM) )
        { 
	      if( strcmp( palabras[i] , word ) == 0 )
          {
			bandera='V'; 
            PosPal=i;
		  }
		  i++;
	   }
       /* COMPARA LA RESPUESTA */
	   if( bandera == 'V' )
       {
		printf("\n !! Si existe la palabra en el texto !!");
        printf("\n La palabra '%s' se encuenta en la posicion [%d]",word,PosPal+1);
	   }
       else
       {
		printf("\n No existe la palabra '%s' en el texto ",word);
	   }

       printf("\n\n-------- Desea seguir continuando en buscar palabras ? -----------\n");
       printf("Ingrese su respuesta S/N :");
       fflush(stdin);
       scanf("%c",&respuesta);

    }while( (respuesta != 'N')&&(respuesta != 'n') );


    /* CIERRA EL ARCHIVO */
	fclose(file);

return 0;
}

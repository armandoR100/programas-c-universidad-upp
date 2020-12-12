#include<stdio.h>
#include<conio.h>
#define direccion1 "C:\\files\\Numeros.txt"
#define direccion2 "C:\\files\\Numeros_Pares.txt"
#define direccion3 "C:\\files\\Numeros_Impar.txt"
#define TAM 100
void MostrarArreglos(int array[],int Array_Par[],int Array_impares[],int i);

void MostrarArreglos(int array[],int Array_Par[],int Array_impares[],int i)
{
    printf("\n LISTA DE TODOS LOS NUMEROS\n\n");
    for(i=0;i<TAM;i++)
    {
      printf("[%d]",array[i]);
    }
    printf("\n\n LISTA DE PARES\n\n");
    for(i=0;i<TAM;i++)
    {
      printf("[%d]",Array_Par[i]);
    }
    printf("\n\n LISTA DE IMPARES\n\n");
    for(i=1;i<TAM;i++)
    {
      printf("[%d]",Array_impares[i]);
    }
    printf("\n");
}

int main()
{
	FILE *original,*pr,*ir;
	int array[TAM]={0},Array_Par[TAM]={0},Array_impares[TAM]={0};
	int i=0,SumaPar=0,SumaImpar=0;
	
    original = fopen(direccion1,"rt");
    pr = fopen(direccion2,"w");
	ir = fopen(direccion3,"w");

    if( (original==NULL)||(pr==NULL)||(ir==NULL) )
    {
      printf("Hubo un error al crear el archivo en %s",direccion1);
    }
    else
    {
        printf("Se crearon correctamente los archivos en las siguientes direcciones:");
        printf("\n %s \n %s \n %s \n",direccion1,direccion2,direccion3);
	    do
        {
		  fscanf( original, "%d", &array[i] );
          if ( array[i]%2 == 0 )
          {   
			fprintf( pr,"%d ",array[i] );
	        Array_Par[i] = array[i];
            SumaPar = SumaPar+array[i];
    	  }		
		  else
          { 
		  	fprintf( ir,"%d ",array[i] );
		    Array_impares[i] = array[i];
            SumaImpar = SumaImpar+array[i];
          }
          i++;
	    }while( !feof(original) ); 

        MostrarArreglos(array,Array_Par,Array_impares,i);

        printf("\n La Suma De Todos Los Pares Son: %d ",SumaPar);
        printf("\n La Suma De Todos Los Impares Son: %d ",SumaImpar);
        fprintf( pr,"\n<<<< %2d >>>>",SumaPar );//insertando al archivo par txt
        fprintf( ir,"\n<<<< %2d >>>>",SumaImpar );//insertando al archivo impar txt 
    }    

    fclose(original);
    fclose(pr);
    fclose(ir);

getch();
return 0;
}

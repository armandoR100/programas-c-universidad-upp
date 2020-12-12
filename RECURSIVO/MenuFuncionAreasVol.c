// Alumno: Armando Rafael Romero Juarez
// Materia: Programacion Estructurada
// Funciòn_Sin_Retorno_De_Menù_Para_Calcular_Areas,Volumen,de cudrado,circulo,esfera

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.1416
void AreaVolumenCuadrado();
void AreaCirculo();
void VolumenEsfera();

void AreaVolumenCuadrado(){
	int lado,altura,Area,volumen;
	printf("\n---AREA Y EL VOLUMEN DE UN CUADRADO---\n");
	printf("\nIngrese el ancho :");
	scanf("%d",&lado);
	printf("\nIngrese la altura :");
	scanf("%d",&altura);
	Area=lado*lado;
	volumen=lado*lado*altura;
	printf("\nLa area del cuadrado es: %d",Area);
	printf("\nEl volumen del cuadrado es : %d",volumen);
	printf("\n\n\n");
}

void AreaCirculo(){
	int radio,area;
	printf("\n---CALCULANDO AREA DEL CIRCULO---\n");
	printf("\nIngrese el radio :");
	scanf("%d",&radio);
	area=PI*(radio*radio);
	printf("\nLa area del circulo es : %d",area);
	printf("\n\n\n");
}

void VolumenEsfera(){
	int vol,rad;
	printf("\n---CALCULANDO EL VOLUMEN DE UNA ESFERA---\n");
	printf("Formula: V=[(4/3)*(Pi)*(Radio^3)]");
	printf("\nIngrese el radio :");
	scanf("%d",&rad);
	vol=4/3*PI*pow(rad, 3);
	printf("\nEl volumen de la esfera es : %d",vol);
	printf("\n\n\n");
}


int main()
{
    int opcion;
    do {
    printf("SELECCIONE UNA DE LAS SIGUIENTES OPERACIONES\n");
    printf("1: Calcular el Área y Volumen de un cuadrado\n");
    printf("2: Calcular el Area de un circulo\n");
    printf("3: Calcular el Volumen de una esfera\n");
    printf("4: Salir");
    printf("\nIngrese una opcion :");
    scanf("%d",&opcion);
    
      switch (opcion){
    	case 1:
    	    AreaVolumenCuadrado();
    	break;
    	case 2:
    	    AreaCirculo();
    	break;
    	case 3:
    	    VolumenEsfera();
    	break;
    	default:
    	    printf("\n****Ha finalizado***\n");
    	break;
      }
    }while(opcion!=4);
   return 0;
}

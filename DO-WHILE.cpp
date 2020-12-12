#include<stdio.h>//libreria

void main()//menu

int a;
int b;
int suma;
int resta;
int division;
int producto;
int modulo;//declaracion de variables
char respuesta;

Do//inicia el ciclo repetitivo de Repetir hasta
{
printf("\n ingresa un numero entero positivo");//pido el 1er numero
scanf("%d",&a);//guardo el primer numero
printf("\n ingresa un numero entero positivo");//pido ell segundo numero
scanf("%d",&b);//guardo el segundo numero

suma=a+b; //operacion de suma
printf("\n La suma entre a y b es: %d\n", suma); //guardo la operacion en la variable suma

resta=a-b;//operacion resta
printf("\n La resta entre a y b es: %d\n", resta); //guardo la operacion de la variable resta

division=a/b;//se hace la operacion de division
printf("\n La división entre a y b es: %d\n", division); //guardo la operacion en la variable division

producto=a div b;//se saca el producto de la division
printf("\n El producto entre a y b es: %d\n", producto); //la guardo en variable producto

modulo=a%b;//se saca el residuo de la division
printf("\n El módulo entre a y b es: %d\n", modulo); //guardo la variable en modulo

printf("\n \n ¿Desea realizar nuevamente el calculo? \n ")//pregunto si quiere hacer nuevamente el calculo
scanf("%d",&respuesta)//guardo su respuesta

while (respuesta=="no" //se cierra el ciclo do-while
}


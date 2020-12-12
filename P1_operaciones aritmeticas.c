#include<stdio.h>//libreria

int main()//menu
{
int a;
int b;
int suma;
int resta;
int division;
int producto;
int modulo;//declaracion de variables
char respuesta;

printf("\n ingresa un numero entero positivo \n");//pido el 1er numero
scanf("%d",&a);//guardo el primer numero
printf("\n ingresa un numero entero positivo \n");//pido ell segundo numero
scanf("%d",&b);//guardo el segundo numero

if (a>0&&b>0)//mientras que a y b no sea menor que cero se calcula las siguientes operaciones
{

suma=a+b; //operacion de suma
printf("\n La suma entre a y b es: %d\n", suma); //guardo la operacion en la variable suma

resta=a-b;//operacion resta
printf("\n La resta entre a y b es: %d\n", resta); //guardo la operacion de la variable resta

division=a/b;//se hace la operacion de division
printf("\n La division entre a y b es: %d\n", division); //guardo la operacion en la variable division

producto=a*b;//se saca el producto de la multiplicacion a y b
printf("\n El producto entre a y b es: %d\n", producto); //la guardo en variable producto

modulo=a%b;//se saca el residuo de la division
printf("\n El modulo entre a y b es: %d\n", modulo); //guardo la variable en modulo
}//fin del if 

return 0;
}//fin del programa

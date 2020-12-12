#include<stdio.h>//libreria

int main()//menu
{
int a, b,suma, resta, division; 
int producto,modulo,op, r;

do
{
printf ("1=suma\n");
printf ("2=resta\n");
printf ("3=division\n");
printf ("4=producto\n");
printf ("5=modulo\n");
printf ("ingrese una opcion\n");
scanf ("%d",&op);

switch (op)
{
	case 1:
	
printf("\n ingresa un numero entero positivo \n");//pido el 1er numero
scanf("%d",&a);
printf("\n ingresa un numero entero positivo \n");//pido el segundo numero
scanf("%d",&b);

suma=a+b; //operacion de suma
printf("\n La suma entre a y b es: %d\n", suma); 

	break;
	
	case 2:
	
printf("\n ingresa un numero entero positivo \n");//pido el 1er numero
scanf("%d",&a);
printf("\n ingresa un numero entero positivo \n");//pido el segundo numero
scanf("%d",&b);

resta=a-b;//operacion resta
printf("\n La resta entre a y b es: %d\n", resta); 

	break;
	
	case 3:
	
printf("\n ingresa un numero entero positivo \n");//pido el 1er numero
scanf("%d",&a);
printf("\n ingresa un numero entero positivo \n");//pido el segundo numero
scanf("%d",&b);

division=a/b;//se hace la operacion de division
printf("\n La division entre a y b es: %d\n", division); 

	break;
	
	case 4:
	
printf("\n ingresa un numero entero positivo \n");//pido el 1er numero
scanf("%d",&a);
printf("\n ingresa un numero entero positivo \n");//pido el segundo numero
scanf("%d",&b);
producto=a*b;//se saca el producto de la multiplicacion a y b
printf("\n El producto entre a y b es: %d\n", producto); //la guardo en variable producto

	break;
	
	case 5:
	printf("\n ingresa un numero entero positivo \n");//pido el 1er numero
scanf("%d",&a);
printf("\n ingresa un numero entero positivo \n");//pido el segundo numero
scanf("%d",&b);
	modulo=a%b;//se saca el residuo de la division
printf("\n El modulo entre a y b es: %d\n", modulo); //guardo la variable en modulo
	break;
	
	default:
	printf("no se puede");
}

printf("desea seguir calculando si=0 , no=1\n");
scanf("%d",&r);

}
while (r==1);

return 0;
}
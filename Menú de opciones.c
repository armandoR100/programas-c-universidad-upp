/*       
       Armando Rafael Romero J.
    Fundamentos de programación
     Programa : Menú de opciones
*/
#include<stdio.h> 
int main()
{  //                       inicia el programa
	int op ;
    int a, b, fact = 1;//declaración de
	int factor,t,r;//           variables
	int i, numero;
	int x,n;
		
 do //iniciara el ciclo do-while.
 {//mostrara en pantalla todo este menu y guardara. la opción que el usuario introduzca.
	printf("\n \n  Menu de opciones\n");
	printf("\n 1=tabla (For)");
	printf("\n 2=tabla(While)");
	printf("\n 3=factorial(For)");
	printf("\n 4=factorial(while)");
	printf("\n Ingrese el numero de la operación que desea hacer: ");
	scanf("%d",&op);

  
 switch(op)//la variable 'op' entra en switch.
	{
		case 1://inicia el caso uno.
        printf("\n tabla de multiplicar(for)");
        printf( "\n   Introduzca un numero : " );//pide un numero
        scanf( "%d", &numero );//guarda el numero
        printf( "\n   La tabla de multiplicar del %d es:\n", numero );//el numero se ira a multiplicar
        for ( i = 1 ; i <= 10 ; i++ )//ingresa al ciclo
        {//verificar el ciclo
      printf( "\n   %d * %d = %d", numero, i, i * numero );//se muestra en pantalla operación
        }//termina el ciclo 

		break;//finaliza el caso uno
		
		case 2://inicia caso dos

printf("\n tabla de multiplicar(while)");
printf ("\n Introduce el número:");//pide el numero
scanf("%d",&x);//lee el numero

n=1;//inicializa la variable n que empiece desde 1
while (n<=10)//ingresa la condición,hasta que n sea menor o igual que 10 finalizara el ciclo mientras
{  //ingresa al ciclo
printf("  %d * %d = %d\n",x,n,x*n);//hace la operación y la muestra en pantalla
n++;//como la condición es verdadera entonces n incrementa
} //finaliza el ciclo

		break;//finaliza el caso dos
	
		case 3:

  printf("Escribe un numero para calcular su factorial\n");//pide un numero al usuario
  scanf("%d", &a);//lee el numero

  for (b = a; b > 1; b--)//inicia el ciclo con la condición que b va a empezar desde el numero que el usuario dio y luego decrementara
  {
    fact = fact * b;//la variable fact vale 1 y esta estara guardando lo que hay en la operación
  }//se cierra el ciclo
 printf("El factorial de %d = %d\n", a, fact);//y se muestra el resultado
      
    	break;//finaliza el caso tres
		
		case 4://inicia el caso cuatro
		
		printf("\n factorial(while)");
printf("\n Ingresa numero para calcular el factorial "); //pide un numero
scanf("%d",&factor); //guarda el numero

t=factor-1; //'t' va a guardar la operación de la variable factor menor uno

r=factor; //y 'r' igual guardara lo que hay en la variable factor

  while (t>=1) //entra a un ciclo 
  { //en la cual la condición es que si la variable 't' que guardo la operación ya hecha ,es mayor o igual a uno esta entrara al ciclo'
      r=r*t; //una variable 'r' ahora guardara la operación de 'r' por 't''
      t--; //y ahora 't' decrementa
  } //cierra el ciclo
printf("El factorial de %d es: %d ", factor,r); //muestra la operación
		
		break;//finaliza el cuarto caso
		
		
		default:
		printf("\n \n es incorrecto el numero que ingreso");// y si ninguno de los casos es lo que indico el usuario se mostrara este mensaje en pantalla
	}// se cierra 'switch'
  
  } //se cierra el ciclo do-while
  while(op<=4&&op>=1);//y terminara si la opción que el usuario no es menor a uno ,ni mayor que cuatro
  
 return 0;
}//termina el programa
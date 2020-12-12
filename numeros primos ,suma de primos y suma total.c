//este programa se trata de saber cuantos numeros primos hay en rango que el usuario ingrese.




#include <stdio.h> //la biblioteca que se utilizara.
int main ()
{
	int i,numero,cont,j,sp,st;
	printf ("teclea un numero\n");
	scanf ("%d",&numero); //aguarda el nuemero que ingreso el usuario.
	sp=1;
	st=0;
	for (j=1; j<=numero; j++)//ciclo que realiza el conteo hasta el numero que agrego el usuario
	{
		cont=0;
		for (i=1; i<=j; i++)//ciclo que hacegura la divicion por todos lo0s numeros disponibles
		{
			if (j%i==0)//define si es primo
			{
				cont=cont +1;
			}
		}
		if (cont<=2)//se asegura que sea primo
		{
			printf (" %d",j);//imprime los numeros primos
			sp=sp*j;//suma los numeros primos
		}
		st=st+j;//suma todos los numeros dentro de los parametros
	}
	printf ("\nel producto de los numeros primos es: %d\n",sp);
	printf ("la suma de todos los numeros es: %d",st);
	getchar ();
	getchar();
	return 0;
}

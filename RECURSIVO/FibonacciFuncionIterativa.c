#include <stdio.h>
// Alumno:  Armando Rafael Romero Juarez
// Materia: Programacion Estructurada
// Funcion_Serie_Fibonacci_iterativa
/* Esta funcion le va asignando valores a variables
   para que se sumen y pueda retornar la serie
   fibonacci hasta el numero que el usuario halla asignado */
void fibonacci(int num);

void fibonacci(int num)
{
	int i, x = 0, y = 1, z = 1;
	printf("1, ");
	for (i = 1; i < num; i++)
	{
		z = x + y;
		x = y;
		y = z;

		printf("%d ,", z);
	}
}

int main()
{
	int numero;

	printf("\nIndique el numero de elementos :");
	scanf("%d", &numero);

	fibonacci(numero);

	return 0;
}

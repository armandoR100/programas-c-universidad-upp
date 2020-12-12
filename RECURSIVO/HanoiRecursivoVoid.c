//  Alumno:  Armando Rafael Romero Juarez
//  Materia: Programacion Estructurada
//  Funcion_Recursiva_De_Torres_Hanoi
 
#include <stdio.h>
void torres_hanoi(int n,int origen, int destino, int auxiliar);
 
int main(){
	int n;
	printf("\nNumero de discos : ");
	scanf("%d",&n);
 	
    printf("\n\nLos movimientos a realizar son: \n");
    
	torres_hanoi(n,'A','B','C');
	
	return 0;
}
 
void torres_hanoi(int n,int origen,int destino, int auxiliar){
 
	if (n==1){
		printf("\nMover el disco 1 de origen (%c) -> destino (%c)\n",origen,destino);
	}
	else{ torres_hanoi(n-1,origen,auxiliar,destino);
		printf("\nMover el disco %d de origen (%c) -> destino (%c)\n",n,origen,destino);
		torres_hanoi(n-1,auxiliar,destino,origen);
	}
}


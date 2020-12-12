#include<stdio.h>
#define TAM 10

void llenArreglo(int [TAM]);
void imprimeArreglo(int [TAM]);

int main(){
	int c;
	int A[TAM];
	llenArreglo(A);
	imprimeArreglo(A);
	return 9;
}

void llenArreglo(int arreglo[TAM]){
	int c;
	for(c=0; c<TAM; c++){
		arreglo[c] = 0;
	}
}

void imprimeArreglo(int arreglo[TAM]){
	int c;
	for(c=0; c<TAM; c++){
		printf("%d ", arreglo[c]);
	}
}

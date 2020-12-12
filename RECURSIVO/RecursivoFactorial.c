#include<stdio.h>
//  Alumno:  Armando Rafael Romero Juarez
//  Materia: Programacion Estructurada
//  Funcion_Recursiva_para_sacar_el_factorial_de_un_numero

int recursivo_factorial(int n);

int recursivo_factorial(int n){
    if(n<=1){
          return 1;
    }else{
          return (n*recursivo_factorial(n-1));
    }
}

int main(){
    int n;

        printf("Ingrese un numero: ");
        scanf("%d",&n);
    
        printf("El factorial es: %d",recursivo_factorial(n));
    return 0;
}


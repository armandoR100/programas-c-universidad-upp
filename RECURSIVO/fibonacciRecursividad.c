#include <stdio.h>
//  Alumno:  Armando Rafael Romero Juarez
//  Materia: Programacion Estructurada
//  Funcion_Recursiva_para_sacar_la_serie_fibonacci_de_un_numero
/*  Esta funcion es de tipo entera y verifica si es igual a cero
    o igual a uno,si esto se cumple lo retornara la variable i
    sino a la i se le restara 1 y se sumara con la misma funcion 
	solo que ahora menos dos                                     */
int fibo(int n);

int fibo(int n){
    if((n==0)||(n==1)){
          return n;
    }else{
          return (fibo(n-1)+fibo(n-2));
    }
}

int main(){
    int numero,i;

    printf("Ingrese un numero: ");
    scanf("%d",&numero);
    
    for(i=0;i<numero;i++){
    printf("%i ,",fibo(i));	
    }

    return 0;
}

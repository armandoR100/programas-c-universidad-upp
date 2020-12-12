#include <stdio.h>
#include <math.h>
 
int main()
{
    int a,b,c,d;
    float x,y;
 
    printf("Ingrese coeficiente a: \n ");
    scanf("%d",&a);
 
    while (a == 0) {
        printf("Ingrese coeficiente a: ");
        scanf("%d",&a);
    }
 
    printf("Ingrese coeficiente b: \n");
    scanf("%d",&b);
    
    printf("Ingrese coeficiente c: \n");
    scanf("%d",&c);

printf("ecuación = -b +-sqrt(b*b-4*a*c)/(2*a)\n \n");
   
     d = b*b-4*a*c;
    if (d > 0) {
        x = (-b+sqrt(d))/(2*a);
        y = (-b-sqrt(d))/(2*a);
        printf("la solución de x1 =  %.2f\n",x);
        printf("la solución de x2 = %.2f\n",y);
    }
    else if (d == 0) {
        x = (-b)/(2*a);
        printf("x1 = %.2f\n",x);
    }
    else
        printf("La ecuacion no tiene solucion +_-");
 
    return 0;
}

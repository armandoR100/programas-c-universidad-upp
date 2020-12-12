#include<stdio.h>
int main ()
{
	int a,b,c,num;
	
	do 
	{
		printf("    Numeros Ordenados\n ");
		printf("\n ingresa el primer numero:");
		scanf("%d",&num);
	}
	while(num<=0);
	a=num;
	
		do 
	{
		printf("\n ingresa el 2do numero:");
		scanf("%d",&num);
	}
	while(num<=0&&num!=a);
	b=num;
	
		do 
	{
		printf("\n ingresa el 3er mumero:");
		scanf("%d",&num);
	}
	while(num<=0&&num!=a&&num!=b);
	c=num;
	
	printf("\n los numeros son:%d,%d,%d \n",a,b,c);
	
	if ((a>b)&&(a>c))
    {
        if (b>c)
        {
            printf("\n los numeros de mayor a menor son : %d > %d > %d\n",a,b,c);
        }
        else
        {
            printf ("\n los numeros de mayor a menor son : %d > %d > %d\n",a,c,b);
        }
    }
    if ((b>a)&&(b>c))
    {
        if (a>c)
        {
            printf("\n los numeros de mayor a menor son : %d > %d > %d\n",b,a,c);
        }
        else
        {
            printf ("\n los numeros de mayor a menor son : %d > %d > %d\n",b,c,a);
        }
    }
    if ((c>a)&&(c>b))
    {
        if (a>b)
        {
            printf("\n los numeros de mayor a menor son : %d > %d > %d\n",c,a,b);
        }
        else
        {
            printf ("\n los numeros de mayor a menor son : %d > %d > %d\n",c,b,a);
        }
    }
	
	
	return 0;
}
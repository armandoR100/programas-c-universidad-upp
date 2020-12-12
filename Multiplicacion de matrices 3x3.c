#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
    int i,num,num2,j;
    int m[3][3];
    int n[3][3];
    int r[3][3];
    srand(time(NULL));
    
    printf("\n1ra matriz \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            num=rand()%(10-1);
            m[i][j]=num;
            printf("[%d]",m[i][j]);  
        }
        printf("\n");
    }
    
      printf("\n2da matriz \n");
    
    
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            num2=rand()%(10-1);
            n[i][j]=num2;
            printf("[%d]",n[i][j]);  
        }
        printf("\n");
    }
    
    printf("\nresultado de la matriz \n");
    
    
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            r[i][j]=m[i][0]*n[0][j];
            printf("[%d]",r[0][j]);  
        }
        printf("\n");
    }
    
    return 0;
}
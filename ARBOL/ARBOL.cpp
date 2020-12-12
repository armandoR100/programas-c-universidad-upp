// ALUMNO : ARMANDO RAFAEL ROMERO JUAREZ
// MATERIA : PROGRAMACION ESTRUCTURADA
// 1 PARTE DEL EXAMEN 

#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#define LARGO 600 
#define ALTO 400
#define NUMERO_PIXELES 400
#define MAXIMO_COLOR 16
#define VERDE 10
#define BLANCO 15
#define GRIS 8
#define VERDE_OSCURO 2
#define CAFE 6

main()
{
    initwindow( LARGO ,ALTO );//SE CREA UNA VENTANA DE PIXEL DE LARGO X PIXEL DE ALTO
    srand(time(NULL));//FUNCION QUE SIRVE PARA LA GENERACION DE NUMEROS ALEATORIOS
    int x = LARGO/2;//300
    int color ,x1 ,y1 , pico=80, puntos_del_tronco=7, puntos_del_arbol=21,LINEA_FINAL=x+40;//VARIABLES
    int tronco[puntos_del_tronco*2]={ x-50,x-66 , x-50,x+40, x+50,x+40, x+50,x-66 ,x,x-60 ,x-50,x-66 };//COORDENADAS DEL TRONCO  
	int arbol[puntos_del_arbol*2]={ x,pico            ,  x-(40*2),pico+40   ,
                                    x-(20*2),pico+40  ,  x-(60*2),pico+60   ,
                                    x-(40*2),pico+60  ,  x-(80*2),pico+80   ,
                                    x-(60*2),pico+80  ,  x-(100*2),pico+100 ,
                                    x-(80*2),pico+100 ,  x-(120*2),pico+120 ,
                                    x,pico+160        ,  x+(120*2),pico+120 ,
                                    x+(80*2),pico+100 ,  x+(100*2),pico+100 ,
                                    x+(60*2),pico+80  ,  x+(80*2),pico+80   ,
                                    x+(40*2),pico+60  ,  x+(60*2),pico+60   ,
                                    x+(20*2),pico+40  ,  x+(40*2),pico+40   ,   x,pico  };//COORDENADAS DEL ARBOL


    /* CIRCUNFERENCIA DEL CIRCULO */
    setcolor(BLANCO);
    circle(LARGO-70,70,30);  
  
    /* LINEAS DEL TRONCO */
    for(int j=0;j<puntos_del_tronco;j++)
    {
       setcolor(CAFE);
       drawpoly(j, tronco);
       delay(160);
    }

    /* LINEAS DEL ARBOL */
    for(int i=0;i<=puntos_del_arbol;i++)
    {
        setcolor(VERDE);
        drawpoly(i, arbol);
        delay(170);
    } 

    /* PAISAJE */
    for(int r=0;r<NUMERO_PIXELES;r++)
    {
      color=rand()%MAXIMO_COLOR;
      x1 = rand()%LARGO;
      y1 = rand()%LINEA_FINAL;
      putpixel(x1,y1,color);
      delay(4);
    }    

    /* LA LINEA DE TIERRA */
    line(0,x+40,LARGO,x+40);
    delay(10);

    /* LA LUNA */
    int i=30;
    while(i>0)
    {
       setcolor(BLANCO);
       circle(LARGO-70,x-230,i--); 
       delay(0);
    }

    /* COLOR DEL ARBOL */
    setcolor(VERDE);
    setfillstyle(8, VERDE);
    fillpoly(21,arbol);  

    /* COLOR DEL TRONCO */
    setcolor(CAFE);
    setfillstyle(4, CAFE);
    fillpoly(6,tronco);
     
    /* PASTO */
    setcolor(VERDE_OSCURO);
    setfillstyle(5, VERDE);
    bar(0,342,LARGO,ALTO);

   
  getch();
  closegraph();
}

//  MATERIA: Programacion Estructurada
//  ALUMNO: Armando Rafael Romero Juarez
//  PROGRAMA: Grafico de la de la figura de ua X (equis)
#include<graphics.h>
#include<conio.h>
#include<dos.h>

int main()
{
   int gamaDriver = DETECT;
   int gamaMode;
   int color;
    
	initgraph(&gamaDriver, &gamaMode, "C:\\TC\\BGI");                                                         
    	  
    setcolor(YELLOW);//pinta la linea de color AMARILLO
  	line(0,0,getmaxx(),getmaxy() );// linea [\]   
	setcolor(YELLOW);//pinta la linea de color AMARILLO
    line(getmaxx(),0,0,getmaxy() );// linea [/]
   	
  getch();//detiene la pantalla
  closegraph();//cierra el grafico

return 0;
}  

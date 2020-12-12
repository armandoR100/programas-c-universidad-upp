#include<graphics.h>
#include<conio.h>
#include<dos.h>

int main()
{
   int gamad=DETECT, gamam, color;
   initgraph(&gamad, &gamam, "C:\\TC\\BGI");                                             
  
	setcolor(10);//pone a linea el color verde
   	line(getmaxx()/2,0,getmaxx()/2,getmaxy() );// linea en medio [ | ]
   	setcolor(10);//pone a linea el color verde
   	line( 0,getmaxy()/2,getmaxx(),getmaxy()/2 );// linea en medio [--]
   	
   getch();//detiene la pantalla
   closegraph();//cierra el grafico

return 0;
}

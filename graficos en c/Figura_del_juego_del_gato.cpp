//  MATERIA: Programacion Estructurada
//  ALUMNO: Armando Rafael Romero Juarez
//  PROGRAMA: Grafico de la figura del gato
#include<graphics.h>
#include<conio.h>
#include<dos.h>

int main()
{
   int gd=DETECT, gm, color;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

      setcolor(14);//color amarillo
   	  line( (getmaxx()/2)/2,0,(getmaxx()/2)/2,getmaxy() );// linea [ * | i ]
      setcolor(14);//color amarillo
   	  line( ((getmaxx()/2)/2)*3,0,((getmaxx()/2)/2)*3,getmaxy() );// linea [ i | * ]
      setcolor(14);//color amarillo
   	  line(  0,(getmaxy()/2)/2,getmaxx(),(getmaxy()/2)/2  );//     [ < ]
	  //                                                     linea [ - ]
	  //                                                           [ _ ] 
      setcolor(14);//color amarillo
   	  line(  0,((getmaxy()/2)/2)*3,getmaxx(),((getmaxy()/2)/2)*3  );//     [ - ]
	  //                                                             linea [ _ ] 
      //                                                                   [ > ]                                                                   
    getch();//detiene la pantalla
    closegraph();//cierra el grafico

return 0;
}  

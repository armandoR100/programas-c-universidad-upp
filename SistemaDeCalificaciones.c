/*        Alumno:Armando Rafael Romero Juarez, Materia:Estructura De Datos, Funcion De Calificaciones           */
#include<stdio.h>
#include<stdlib.h>

struct parcialfinal{
	float prom;
	int des_f;
	int con_f;
	int pro_f;
};	
struct parcial2{
	int des2;
	int con2;
	int pro2;
};	
struct parcial1{
	int des1;
	int con1;
	int pro1;
};	
struct materias{
	struct parcial1 p1;
	struct parcial2 p2;
	struct parcialfinal pf;
};
struct cuatrimestre{
	struct materias m;//m[7];
};
struct estudiante{
	char nombre[20];
	char carrera[20];
	char copy_carre[20];
	int matricula;
	int copy_matri;
	struct cuatrimestre c;//c[10];
}e;
		
int main(){
    int opcion,opcion1,opcion2,opcion3,opcion4;
		
		printf("****** REGISTRO DE DATOS ******\n\n");
		fflush(stdin);
		printf(" Ingresa tu nombre :");
		gets(e.nombre);
		printf(" Ingresa Tu Carrera u Ingenieria :");
		gets(e.carrera);
		printf(" Ingresa tu matricula :");
		scanf("%d",&e.matricula);
		printf("\n*******************************\n");
		do{
		printf("\n1.-CONTINUAR CON CARRERA ");
		printf("\n2.-CONTINUAR CON MATRICULA ");
		printf("\n3.-SALIR ");
		printf("\nINGRESE UNA OPCION : ");
		scanf("%d",&opcion);
	    switch(opcion){
	    case 1:
			do{
			printf("\n************ MENU CUATRIMESTRE **************\n"); 
			printf("\n1.- PRIMER CUATRIMESTRE");
			printf("\n2.- SEGUNDO CUATRIMESTRE");
			printf("\n3.- TERCER CUATRIMESTRE");
			printf("\n4.- CUARTO CUATRIMESTRE");
			printf("\n5.- QUINTO CUATRIMESTRE");
			printf("\n6.- SEXTO CUATRIMESTRE");
			printf("\n7.- SEPTIMO CUATRIMESTRE");
			printf("\n8.- OCTAVO CUATRIMESTRE");
			printf("\n9.- NOVENO CUATRIMESTRE");
			printf("\n10.- DECIMO CUATRIMESTRE");
			printf("\n11.- SALIR");
			printf("\nSELECCIONE EL CUATRIMESTRE :");
			scanf("%d",&opcion1);
			
			switch(opcion1){
				case 1://primer cuatrimestre
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
				case 10:
				    do{
				    printf("\n************ MATERIAS **************\n"); 
					printf("\n1.- MATERIA 1");
			        printf("\n2.- MATERIA 2");
			        printf("\n3.- MATERIA 3");
			        printf("\n4.- MATERIA 4");
			        printf("\n5.- MATERIA 5");
			        printf("\n6.- MATERIA 6");
		           	printf("\n7.- MATERIA 7");
		        	printf("\n8.- REGRESAR");
		        	printf("\nSELECCIONE LA MATERIA :");
		        	scanf("%d",&opcion2);
				    switch(opcion2){
				        case 1://materia1
				        case 2:
						case 3:
						case 4:
						case 5:
						case 6:
						case 7:
				            do{
				            printf("\n\n*********** MENU PARCIALES ***********\n\n");
			                printf("\n1.- PARCIAL 1 ");
			                printf("\n2.- PARCIAL 2 ");
			      		    printf("\n3.- PARCIAL FINAL ");
		        			printf("\n4.- REGRESAR AL MENU ANTERIOR ");
		        			printf("\nSELECCIONE UNA OPCION :");
		        			scanf("%d",&opcion3);   
		        			switch(opcion3){
		        				
		        			    case 1://parcial uno
		        			        do{
		        			    	printf("\n\n******** MENU RUBROS A CALIFICAR *************\n\n");
		        			    	printf("\n1.- DESEMPENIO ");
			                		printf("\n2.- CONOCIMIENTO ");
			      		    		printf("\n3.- PRODUCTO ");
		        					printf("\n4.- REGRESAR AL MENU ANTERIOR ");
		        					printf("\nSELECCIONE UNA OPCION :");
		        					scanf("%d",&opcion4);
									switch(opcion4){
										case 1:
											printf("\nIngresa la calificacion de desempenio: ");
											scanf("%d",&e.c.m.p1.des1);
											printf("\n\n*******************************************\n\n");	
											system ("pause");
										break;
										case 2:
											printf("\nIngresa la calificacion de conocimiento: ");
											scanf("%d",&e.c.m.p1.con1);
											printf("\n\n*******************************************\n\n");
											system ("pause");
										break;
										case 3:
											printf("\nIngresa la calificacion de producto: ");
											scanf("%d",&e.c.m.p1.pro1);
											printf("\n\n*******************************************\n\n");
											system ("pause");
										break;
										case 4:
										break;
									}
						     		}while(opcion4!=4);
		        			   	break;
		        			   	
		        			   	case 2://parcial 2
		        			   	    do{
		        			    	printf("\n\n******** MENU RUBROS A CALIFICAR *************\n\n");
		        			    	printf("\n1.- DESEMPENIO ");
			                		printf("\n2.- CONOCIMIENTO ");
			      		    		printf("\n3.- PRODUCTO ");
		        					printf("\n4.- REGRESAR AL MENU ANTERIOR ");
		        					printf("\nSELECCIONE UNA OPCION :");
		        					scanf("%d",&opcion4);
									switch(opcion4){
										case 1:
											printf("\nIngresa la calificacion de desempenio: ");
											scanf("%d",&e.c.m.p2.des2);
											printf("\n\n*******************************************\n\n");	
											system ("pause");
										break;
										case 2:
											printf("\nIngresa la calificacion de conocimiento: ");
											scanf("%d",&e.c.m.p2.con2);
											printf("\n\n*******************************************\n\n");
											system ("pause");
										break;
										case 3:
											printf("\nIngresa la calificacion de producto: ");
											scanf("%d",&e.c.m.p2.pro2);
											printf("\n\n*******************************************\n\n");
											system ("pause");
										break;
										case 4:
										break;
									}
						     		}while(opcion4!=4);	
		        			   	break;//fin parcial 2
		        			   	
		        			   	case 3://final parcial 3
		        			          e.c.m.pf.con_f = (e.c.m.p1.con1 + e.c.m.p2.con2)/2 ;
		        			   	      e.c.m.pf.des_f= (e.c.m.p1.des1 + e.c.m.p2.des2)/2 ;
		        			   	      e.c.m.pf.pro_f= (e.c.m.p1.pro1 + e.c.m.p2.pro2)/2 ;
		        			   	      printf("\nEl promedio de la calificacion de conocimiento final es : %d",e.c.m.pf.con_f);
		        			   	      printf("\nEl promedio de la calificacion de desarrollo final es : %d",e.c.m.pf.des_f);
		        			   	      printf("\nEl promedio de la calificacion de producto final es : %d",e.c.m.pf.pro_f);
								break;//fin parcial 3
								
								case 4://salir del parcial
									printf("\n\nRegresando\n\n");
								break;
		        			
							}//switch
							}while(opcion3!=4);//salir del menu de parciales
						break;//materia 1
						case 8:
								printf("\n\nRegresando\n\n");
						break;		
					}//switch de materias
			    	}while(opcion2!=8);//salir del menu materias
				break;//cuatris
				case 11:// SALIR
			       	printf("\n\nRegresando\n\n");
			    break;//fin del opcion cuatrimestre
			}//switch de cuatrimestre
            }while(opcion1!=11);//salir del menu de cuatrimestre
        break;//caso de continuar por carrera o matricula
        }//switch si continuo
        printf("\nVOLVER A INTENTARLO POR FAVOR\n\n");
        }while(opcion!=3);//se sale totalmente de los menus
    
    printf("\n\n---Obtencion Y Validacion De Datos---\n");
    printf("\nIngresa nuevamente tu matricula \n");
    scanf("%d",&e.copy_matri);
    printf("\nIngresa nuevamente tu carrera \n");
	scanf("%s",&e.copy_carre);  
      
    if(e.copy_matri==e.matricula||e.copy_carre==e.carrera){   
	    e.c.m.pf.prom=(e.c.m.pf.con_f + e.c.m.pf.des_f + e.c.m.pf.pro_f)/3;
        printf("\n\nSu nombre es: %s",e.nombre);
	    printf("\nSu matricula es: %d",e.matricula);
	    printf("\nSu Carrera o Ingenieria es: %s",e.carrera);
	    printf("\n\nSu calicacion del 1er parcial en conocimiento es: %d",e.c.m.p1.con1);
	    printf("\nSu calicacion del 1er parcial en desarrollo es: %d",e.c.m.p1.des1 );
	    printf("\nSu calicacion del 1er parcial en producto es: %d",e.c.m.p1.pro1 ); 
	    printf("\n\nSu calicacion del 2do parcial en conocimiento es: %d",e.c.m.p2.con2 );
	    printf("\nSu calicacion del 2do parcial en desarrollo es: %d",e.c.m.p2.des2 );
	    printf("\nSu calicacion del 2do parcial en producto es: %d",e.c.m.p2.pro2 ); 
	    printf("\n\nEl promedio de la calificacion de conocimiento final es : %d",e.c.m.pf.con_f);
	    printf("\nEl promedio de la calificacion de desarrollo final es : %d",e.c.m.pf.des_f);
	    printf("\nEl promedio de la calificacion de producto final es : %d",e.c.m.pf.pro_f);
	    printf("\nSu Promedio final de toda la materia es: %f",e.c.m.pf.prom);       
	}
	  
	return 0;
}


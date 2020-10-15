/*@author Elias de Jesus Alvarez Sánchez. Asistencia academica por
Javier Diaz, profesor de la BUAP. */

#include <stdio.h>
#include <math.h> /*Funciones matematicas*/ 
#define PI 3.1416 /*Para operaciones de trigonometria*/

int main () /*Funcion cabecera o principal*/
{
	int opcP,opc,opsum,opres,opmul; /*Controladores de iteracion*/
	float cont,temp,suma,resta,mult,numer,denom,division; /*Variables de cada ciclo*/
	float base, expon, expot, radic, ind, inicio; /*Variables para operaciones de potencia*/
	float logar, basee, base10;/*Variables especiales para logaritmos*/
	float sexag,rad,sen, csn,tag,cot,sec,csc; /*Variables para trigonometria*/
	double fact; /*Para factoriales*/
	printf ("Bienvenido\nCalculadora\n\n"); /*Fuera del bucle principal de repeticion*/
	do
	{
		printf ("¿Que operacion desea realizar?\n1.-Suma\n2.-Resta\n3.-Multiplicacion\n");
		printf ("4.-Division\n5.-Potencia\n6.-Raiz\n7.-Logaritmo 10\n8.-Logaritmo Natural\n");
		printf ("9.-Factorial\n10.-Trigonometria\n11.-Salir: ");  /*Opciones que se le brindan al usuario*/
		scanf("%d", &opcP);
		if (opcP<1||opcP>11) /*Supervivencia a errores*/
		{
			printf("Seleeccion invalida\n\n"); /*Mensaje de error*/
		}
		else
		{
			switch (opcP) /*Segun la eleccion del usuario...*/
			{
			case 1:
				do /*Permite que las operaciones se puedan hacer ciclicamente*/
				{
					printf ("Escriba la cantidad de numeros que desea sumar(NO NEGATIVOS): ");
					scanf ("%d",&opsum);
					suma=0;
					if(opsum<=1) /*Supervivencia a errores*/
					{
						printf ("Error\n");
					}
					else
					{
						for (cont=1;cont<=opsum;cont++) /*Suma los numeros que desee el usuario*/
						{
							printf("%0.0f Numero a sumar: ", cont); 
							scanf("%f", &temp);
							suma=suma+temp;
						}
						printf("La suma es: %0.2f \n",suma); /*Dos decimales como maximo*/
					} 
					printf ("Desea:\n1.-Repetir\n2.-Salir al menu anterior: ");/*Control de bucle local*/
					scanf("%d", &opc); /*Control de bucle local*/
					while (opc!=1&&opc!=2) /*Freno para evitar ciclamiento por error*/
					{
						printf ("Error\n");
						printf ("Desea:\n1.-Repetir\n2.-Salir al menu anterior: "); 
						scanf("%d", &opc);
					}
				}
				while(opc!=2);
				break;
			case 2:
				do 
				{
					printf ("Escriba la cantidad de numeros que desea restar(NO NEGATIVOS): ");
					scanf ("%d",&opres);
					resta=0;
					if(opres<=1)
					{
						printf ("Error\n");
					}
					else
					{
						for (cont=1;cont<=opres;cont++)/*Inicia en 1, llega hasta donde el usuario indico. Incrementos de 1 en 1*/
						{
							printf("%0.0f Numero a restar: ", cont); 
							scanf("%f", &temp);
							resta=resta-temp; /*Almacenamiento temporal para el resultado total*/
						}
						printf("La resta es: %0.2f \n",resta); /*Muestra el resultado de la operacion*/
					} 
					printf ("Desea:\n1.-Repetir\n2.-Salir al menu anterior: "); 
					scanf("%d", &opc);
					while (opc!=1&&opc!=2)
					{
						printf ("Error\n");
						printf ("Desea:\n1.-Repetir\n2.-Salir al menu anterior: "); 
						scanf("%d", &opc);
					}
				}
				while(opc!=2);
				break;
			case 3:
				do
				{
					printf ("Escriba la cantidad de numeros que desea multiplicar: ");
					scanf ("%d",&opmul);
					mult=1;
					if(opmul<=1)
					{
						printf ("Error\n");
					}
					else
					{
						for (cont=1;cont<=opmul;cont++)
						{
							printf("%0.0f Numero a multiplicar: ", cont); 
							scanf("%f", &temp);
							mult=mult*temp;
						}
						printf("El producto es: %0.2f \n",mult);
					}
					printf ("Desea:\n1.-Repetir\n2.-Salir al menu anterior: ");
					scanf("%d", &opc);
					while (opc!=1&&opc!=2)
					{
						printf ("Error\n");
						printf ("Desea:\n1.-Repetir\n2.-Salir al menu anterior: "); 
						scanf("%d", &opc);
					}
				}
				while(opc!=2);
				break;
			case 4:
				do
				{
					printf ("Coloque el numero a dividir: ");
					scanf ("%f", &numer);
					printf ("Coloque el numero entre el cual desea dividir: ");
					scanf ("%f", &denom);
					if (denom==0) /*Error que provoca fallos*/
					{
						printf ("ERROR: OPERACION INVALIDA (0/DIV!)\n");
					}
					else /*De lo contrario mostrara el resultado*/
					{
						division=numer/denom;
						printf("El resultado de la division es: %0.2f\n", division);
					}
					printf ("Desea:\n1.-Repetir\n2.-Salir al menu anterior: ");
					scanf("%d", &opc);
					while (opc!=1&&opc!=2)
					{
						printf ("Error\n");
						printf ("Desea:\n1.-Repetir\n2.-Salir al menu anterior: "); 
						scanf("%d", &opc);
					}
				}
				while(opc!=2);
				break;
			case 5:
				do
				{
					printf ("Coloque el numero que desea potenciar: "); /*La base*/
					scanf ("%f", &base);
					printf ("Escriba la potencia a la que desea elevar: "); /*...elevada al exponente*/
					scanf ("%f", &expon);
					if (expon==0)
					{
						printf ("Todo numero elevado a la '0' es 1\n"); /*Definicion matematica por defecto*/
					}
					else
					{
						expot= pow(base,expon); /*Para evitar un ciclo for llamamos a la funcion "pow" que esta en math.h*/
						printf ("El numero obtenido de la potenciacion es: %0.2f\n", expot); /*Nuestro resultado esta aqui*/
					}
					printf ("Desea:\n1.-Repetir\n2.-Salir al menu anterior: ");
					scanf("%d", &opc);
					while (opc!=1&&opc!=2)
					{
						printf ("Error\n");
						printf ("Desea:\n1.-Repetir\n2.-Salir al menu anterior: "); 
						scanf("%d", &opc);
					}
				}
				while(opc!=2);
				break;
			case 6:
				do
				{
					printf ("Coloque el numero que desea radicalizar: "); /*Radicando*/
					scanf ("%f", &base);
					printf ("Escriba el indice del radical: "); /*...con indice*/
					scanf ("%f", &ind);
					if (ind<=1)
					{
						printf ("Las opciones para raices empiezan en 2\n"); /*Definicion matematica por defecto*/
					}
					else
					{
						radic=1/ind;
						expot= pow(base,radic); /*Para evitar un ciclo for llamamos a la funcion "pow" que esta en math.h*/
						printf ("El numero obtenido de la potenciacion es: %0.2f\n", expot); /*Nuestro resultado esta aqui*/
					}
					printf ("Desea:\n1.-Repetir\n2.-Salir al menu anterior: "); 
					scanf("%d", &opc);
					while (opc!=1||opc!=2)
					{
						printf ("Error\n");
						printf ("Desea:\n1.-Repetir\n2.-Salir al menu anterior: "); 
						scanf("%d", &opc);
					}
				}
				while(opc!=2);
				break;
			case 7:
				do
				{
					printf ("Escriba el numero del que desea obtener el logaritmo base 10: ");
					scanf ("%f", &logar);
					if(logar<1)
					{
						printf("ERROR: VALOR FUERA DE DOMINIO\n"); /*Considerando el dominio de log(x)*/
					}
					else
					{
						base10=log10(logar); /*Funcion contenida en math.h*/
						printf("El logaritmo base 10 de %0.0f es: %0.3f\n", logar, base10);
					}
					printf ("Desea:\n1.-Repetir\n2.-Salir al menu anterior: "); 
					scanf("%d", &opc);
					while (opc!=1&&opc!=2)
					{
						printf ("Error\n");
						printf ("Desea:\n1.-Repetir\n2.-Salir al menu anterior: "); 
						scanf("%d", &opc);
					}
				}
				while(opc!=2);
				break;
			case 8:
				do
				{
					printf ("Escriba el numero del que desea obtener el logaritmo neperiano: ");/*Logaritmo base e*/
					scanf ("%f", &logar);
					if(logar<1)
					{
						printf("ERROR: VALOR FUERA DE DOMINIO\n"); /*Considerando el dominio de ln(x)*/
					}
					else
					{
						basee=log(logar); /*Funcion contenida en math.h*/
						printf("El logaritmo base 10 de %0.0f es: %0.3f\n", logar, basee);
					}
					printf ("Desea:\n1.-Repetir\n2.-Salir al menu anterior: "); 
					scanf("%d", &opc);	
					while (opc!=1&&opc!=2)
					{
						printf ("Error\n");
						printf ("Desea:\n1.-Repetir\n2.-Salir al menu anterior: "); 
						scanf("%d", &opc);
					}
				}
				while(opc!=2);
				break;
			case 9:
				do
				{
					printf ("Escriba el numero del que desea obtener factorial:");
					scanf ("%d", &fact); 
					inicio=1;
					if (fact<0)
					{
						printf ("VALOR FUERA DE RANGO...\n"); /*No existe la factorial de (-n)*/
					}
					else
					{
						if (fact==0)
						{
							printf ("Por definicion, la factorial de 0 es 1...\n");	/*Definicion por default*/
						}
						else
						{
							for (cont=1; cont<=fact; cont=cont+1)
							{
								inicio=inicio*cont;
							}
							printf ("La factorial de %0.0d es: %0.2d\n", fact, inicio);
						}
					}	
					printf ("Desea:\n1.-Repetir\n2.-Salir al menu anterior: "); 
					scanf("%d", &opc);
					while (opc!=1&&opc!=2)
					{
						printf ("Error\n");
						printf ("Desea:\n1.-Repetir\n2.-Salir al menu anterior: "); 
						scanf("%d", &opc);
					}
				}
				while(opc!=2);
				break;
			case 10:
				do
				{
					printf ("Escriba el grado sexagesimal del que desee conocer sus valores");
					printf (" trigonometricos. Seno, coseno, tangente, cotangente, secante y ");
					printf ("cosecante: ");
					scanf ("%f", &sexag); /*Obtiene el angulo en grados sexagesimales*/
					rad=(sexag*PI)/180; /*¡Pero la maquina solo lee radianes! Entonces convertimos*/
					sen=sin(rad);
					csn=cos(rad);
					printf ("Los valores son:\n");
					printf ("sen(x) de %0.2f=%0.4f", sexag,sen);
					printf ("\ncos(x) de %0.2f=%0.4f", sexag,csn);
					if (sexag==90 || sexag==270) /*Para evitar errores graves o valores extraños*/
					{
						printf ("\ntan(x) de %0.2f no esta definido ",sexag);
					}
					else 
					{
						tag=tan(rad);
						printf ("\ntan(x) de %0.2f=%0.4f ",sexag,tag);
					}
					if (sexag==0 || sexag==180 || sexag==360)
					{
						printf ("\nEl valor de cot (x) para %0.1f no esta definido", sexag);
					}
					else 
					{
						cot=1/(tan(rad));
						printf ("\ncot(x) de %0.2f=%0.4f ",sexag,cot);
					}
					if (sexag==90 || sexag==270){
						printf ("\nsec(x) de %0.2f no esta definido ",sexag);
					}
					else 
					{
						sec=1/(cos(rad));
						printf ("\nsec(x) de %0.2f=%0.4f ",sexag,sec);
					}
					if (sexag==0 || sexag==180 || sexag==360)
					{
						printf ("\ncsc(x) de %0.2f no esta definido ",sexag);
					}
					else 
					{
						csc=1/(sin(rad));
						printf ("\ncsc (x) de %0.2f:%0.4f ",sexag,csc);
					}
					printf ("\nDesea:\n1.-Repetir\n2.-Salir al menu anterior: "); 
					scanf("%d", &opc);
					while (opc!=1&&opc!=2)
					{
						printf ("Error\n");
						printf ("Desea:\n1.-Repetir\n2.-Salir al menu anterior: "); 
						scanf("%d", &opc);
					}
				}
				while(opc!=2);
				break;
			case 11:
				printf ("Saliendo... espere");
				printf ("\nPRESIONE ENTER PARA CERRAR EL PROGRAMA...");
				getchar ();
				getchar ();
				break;
				default :printf ("Error\n"); ;	
			}
		}
	}
	while (opcP!=11);
	return 0;
}

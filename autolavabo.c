//Hernandez Ortega Erick Ramon
#include <stdio.h>
int main()
{
	int a,b,c,d,ch,m,g,s,ventas;
	
	do {
	printf ("Ingrese una opcion: \n");
	printf ("1.- Lavar los carros \n");
	printf ("2.- Ver las ventas totales \n");
	printf ("3.- Salir. \n");
	scanf("%i",&a);
	
	switch(a) {
		case 1: printf ("Los precios son: chico 50, Mediano 70 y Grande 100 \n");
				printf ("Introduzca cuantos chicos fueron lavados: \n");
				scanf("%i",&b);
				printf ("Introduce cuantos medianos fueron lavados: \n");
				scanf("%i",&c);
				printf ("Introduce cuantos grandes fueron lavados: \n");
				scanf("%i",&d);
				printf("Desea seguir para ver las ventas totales: 1.-Si 2.-No \n");
				scanf("%i",&s);
				break;
		case 2: ch = b * 50;
				m = c * 70;
				g = d * 100;
				ventas = ch + m + g;
				printf ("Se lavaron %i Chicos, %i Medianos, %i grandes.\n",b,c,d);
				printf ("Y las ventas totales: %i pesos \n", ventas);
				printf("Desea seguir para ser una nueva cuenta: 1.-Si 2.-No \n");
				scanf("%i",&s);
				break;
		case 3: s = 2;
				break;	
}
} while(s==1);


return 0;
}

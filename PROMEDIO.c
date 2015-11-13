#include<stdio.h>
#include<stdlib.h>//programa que te de el promedio
float calificacion[10];
float promedio=0;
int main()
{
	printf("INSERTE LAS CALIFICACIONES\n"); 
	for(int i=0; i<10; i++)
{
	printf("DAME LA CALIFICACION %d:\n",i+1);
	scanf("%f",&calificacion[i]);
	promedio+=calificacion[i];
	printf("\n");
}
{
	printf("EL PROMEDIO DE LAS CALIFICACIONES ES: %.1f\n",promedio/10);
}	system("PAUSE");
}

#include<stdio.h>

int main()
{
	char nombre[50];
	int edad;
	
	printf("ingrese su nombre: ");
	scanf("%s",&nombre);
	
	printf("ingrese su edad: ");
	scanf("%d",&edad);
	
	printf("Hola %s, usted tiene %d anios de edad", nombre, edad);
	
	return 0;
}

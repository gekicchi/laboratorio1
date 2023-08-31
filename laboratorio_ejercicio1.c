#include<stdio.h>

int main()
{
	// demostracion int
	int numeroEntero;
	printf("ingrese un numero entero: ");
	scanf("%d",&numeroEntero);
	printf("entero ingresado: %d\n\n",numeroEntero);
	
	// demostracion float
	float numeroFlotante;
	printf("ingrese un numero decimal: ");
	scanf("%f",&numeroFlotante);
	printf("float ingresado: %f\n\n",numeroFlotante);
	
	// demostracion char
	char palabraChar[50];
	printf("ingrese una palabra/frase (50 caracteres max.): ");
	scanf("%s",&palabraChar);
	printf("char ingresado: %s",palabraChar);
	
	return 0;
}

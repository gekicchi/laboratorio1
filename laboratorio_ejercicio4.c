#include<stdio.h>

int main()
{
	int year, divPor4;
	
	printf("ingrese un anio: ");
	scanf("%d", &year);
	
	divPor4 = year%4;
	
	if (divPor4 != 0)
		printf("%d no es anio bisiesto", year);
	else
		printf("%d es anio bisiesto", year);
	
	return 0;
}

#include<stdio.h>

int main()
{
	float numA, numB;
	
	printf("ingrese un numero cualquiera: ");
	scanf("%f",&numA);
	printf("ingrese otro numero cualquiera: ");
	scanf("%f",&numB);
	
	float suma, resta, multi, div;
	
	suma = numA + numB;
	printf("%f + %f = %f\n", numA, numB, suma);
	
	resta = numA - numB;
	printf("%f - %f = %f\n", numA, numB, resta);
	
	multi = numA * numB;
	printf("%f * %f = %f\n", numA, numB, multi);
	
	if (numB != 0)
	{
		div = numA / numB;
		printf("%f / %f = %f\n", numA, numB, div);
	}
	else
		printf("imposible dividir por 0\n");
	
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(NULL));
	int numeros[5], i;
	
	for (i=0; i<5; i++)
		numeros[i] = rand()%10;
		
	printf("orden ascendente: ");
	for (i=0; i<5; i++)
		printf("%d - ", numeros[i]);
		
	printf("\norden descendiente: ");
	for (i=4; i>-1; i--)
		printf("%d - ", numeros[i]);
	
	
	return 0;
}

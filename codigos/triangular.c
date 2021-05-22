#include <stdio.h>

int main()
{
	system("clear");
	int NUM_TRI, i = 0;

	printf("Números triangulares solicitados: \n");
	scanf("%i", &NUM_TRI);

	printf("\n");


	for ( i; i <= NUM_TRI; i++)
	{
	printf("Número triangular_%i = %i\n",i , (i*(i+1))/2 ) ;
		
	};
	printf("\n");
	return 0;

	
};
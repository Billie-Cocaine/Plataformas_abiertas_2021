
#include <stdio.h>
#include <stdlib.h>

#define FALSE 0

#define TRUE 1
#define LOOP 10
#define CLOSE 1

int main ( ) {
	int done = FALSE ;
	int j = 1;

	while ( !done ) {
		printf("Ejecutando asignación de memoria, ciclo %i\n", j);
		int n = 10;
		int *a = (int *)malloc (n * sizeof(int)) ;
		
		int i ;
		for ( i = 0; i < n ; i ++){
			a[i] = i ;
			
			}


		j ++ ;


		for ( i = 0; i < CLOSE ; i ++){
			printf("Liberando la memoria asignada %i\n",j-CLOSE );

			free(a);
			
		
		}



		if (j==LOOP){
			break;
		}


			
	}	


return 0;

}
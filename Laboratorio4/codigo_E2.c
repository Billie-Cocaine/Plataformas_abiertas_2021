
/*

Manejo de momoria y liberacín de memoria 
mediante free()


Andrés Corrales Castro
andres.corralescastro@ucr.ac.cr
*/

#include <stdio.h>
#include <stdlib.h>

#define FALSE 0

#define TRUE 1
#define LOOP 10

int main ( ) {
	int done = FALSE ;
	int j = 1;

	while ( !done ) {
		printf("Ejecutando asignación de memoria,  ciclo %i\n", j);
		int n = 10000000;
		int *a = (int *)malloc (n * sizeof(int)) ;
		
		int i ;
		for ( i = 0; i < n ; i ++){
			a[i] = i ;
			
			}


		j ++ ;


		for ( i = 0; i < n ; i ++){

			free(a);
			printf("Limpiando memoria asinada%i\n ", i);
			int *a = (int *)malloc (n * sizeof(int)) ;
		
		}



		if (j==LOOP){
			break;
		}


			
	}	


return 0;

}

//Andres Corraless Castro
//andres.corralescastro@ucr.ac.cr
// Cadigo para calcula factoriales

#include <stdio.h>

int  factorial  (int n) {
	int  i = 1;
	while  (1 < n) {

		i = i * n;
		n = n - 1;


	 };
	 return i;
	

};

int  main  (int  argc ,  char * argv [] ) {
	system("clear");
	printf("Calcular factorial de: \n");
	int NUM;
	scanf("%d", &NUM );
	int  fac = factorial (NUM);
  
	printf ("	El factorial de %d   es %d\n" ,  NUM ,  fac );
	return  0;
};
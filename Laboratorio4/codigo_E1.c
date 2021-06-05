/*

Manejo de punteros


Andrés Corrales Castro
andres.corralescastro@ucr.ac.cr
*/

#include <stdlib.h>
#include <stdio.h>



int  main ()
{
	char *str1;

	{


		char  a1 = 'A';
		str1 = &a1;
	
	printf("%c", *str1 );
	}
}

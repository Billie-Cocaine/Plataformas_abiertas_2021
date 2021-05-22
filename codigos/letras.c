

//Andres Corraless Castro
//andres.corralescastro@ucr.ac.cr
/*Cadigo para determinar si una letra es vocal
  o es consonante

El sistema no recocnoce la letra ñ,
por lo cual no se toma en cuente en 
en el codigo.

*/ 

#include <stdio.h>

int main()
{
    system("clear");
    char letra;

    printf( "\n   Introduzca una letra: " );
    scanf( "%c", &letra );

    if ( letra == 'a' || letra == 'A' ||
         letra == 'e' || letra == 'E' ||
         letra == 'i' || letra == 'I' ||
         letra == 'o' || letra == 'O' ||
         letra == 'a' || letra == 'U' )
        printf( "\n El caracter %c es una vocal.", letra );

    else if ( letra == 'B' || letra == 'b' ||
         letra == 'C' || letra == 'b' ||
         letra == 'D' || letra == 'd' ||
         letra == 'F' || letra == 'f' ||
         letra == 'G' || letra == 'g' ||
         letra == 'H' || letra == 'h' ||
         letra == 'J' || letra == 'j' ||
         letra == 'K' || letra == 'k' ||
         letra == 'L' || letra == 'l' ||
         letra == 'M' || letra == 'm' ||
         letra == 'N' || letra == 'n' ||
         letra == 'P' || letra == 'p' ||
         letra == 'Q' || letra == 'q' ||
         letra == 'R' || letra == 'r' ||
         letra == 'S' || letra == 's' ||
         letra == 'T' || letra == 't' ||
         letra == 'V' || letra == 'v' ||
         letra == 'W' || letra == 'w' ||
         letra == 'X' || letra == 'x' ||
         letra == 'Y' || letra == 'y' ||
         letra == 'Z' || letra == 'z' )

        printf( "\n El caracter %c es una consonante.", letra );


    else
        printf( "\n El caracter %c se concidera externo al abecedario latino. ", letra );
    printf("\n");
    printf("\n");
    return 0;
    
}

  
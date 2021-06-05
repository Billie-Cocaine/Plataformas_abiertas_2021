/*

Manejo de archivos de texto
parcear información
imprimir información del archvo


Andrés Corrales Castro
andres.corralescastro@ucr.ac.cr
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{

	FILE *archivo;
	
	
	archivo = fopen("user_list.txt","r");
	char userName[10];
    char userID[10];
    int userActivity;

	//-------------------------------------------------------------------------------------------------//

	int option;
	printf("OPCIONES:\n1-Imprimir la lista de usuarios\n");
	printf("2-Imprimir la lista de usuarios y su condición \n3-Ordenar los usuarios por última hora de acceso'\n");
	printf("4-Actualizar los datos de un usuario.\n");

	printf("\nIntrodusca una opción: \n");

	scanf("%i", &option);
	printf(" \n");


	if (option == 1)
	{
		if (archivo == NULL)
        {
            printf("\nError de apertura del archivo. \n\n");
        }
        else
        {
        	
            printf("\nLista de usuarios \n\n");
            int i = 0;
            while(feof(archivo) == 0)
	    {
	    	fscanf(archivo,"%s" ,userName);
	    	fscanf(archivo,"%s" ,userID );
	    	fscanf(archivo,"%i" , &userActivity );
	    	
	    	printf("%s\n",userName);
	    	i++;
	    	if (i == 4)
	    	{
	    		break;
	    	}
	    }
        }
        fclose(archivo);
	return 0;
	}

	//-----------------------------------------------------------------------------------------------------------------//

	else if(option == 2)
	{	

		if (archivo == NULL)
        {
            printf("\nError de apertura del archivo. \n\n");
        }
        else
                {
        	

            printf("\nEstatus de usuario \n\n");
            
            int i = 0;
            while(feof(archivo) == 0)
	    {
	    	fscanf(archivo,"%s" ,userName);
	    	fscanf(archivo,"%s" ,userID );
	    	fscanf(archivo,"%i" , &userActivity );
	    	if(userActivity == 0){
	    		printf("El usuario %s esta en estado activo\n",userName);
	    	}
	    	else if(userActivity == 1){
	    		printf("El usuario %s ha estado activo recientemente\n",userName);

	    	}
	    	else{
	    		printf("El usuario %s esta en estado inactivo\n",userName);
	    	}
	    	
	    	i++;
	    	if (i == 4)
	    	{
	    		break;
	    	}
	    }
        }
        fclose(archivo);
	return 0;
	}

	//-----------------------------------------------------------------------------------------------------------------//

	else if (option == 3)
	{
		if (archivo == NULL)
        {
            printf("\nError de apertura del archivo. \n\n");
        }
        else{
        	

            printf("\nActividad reciente \n\n");
            

            int i = 0;
            while(feof(archivo) == 0)
	    {
	    	fscanf(archivo,"%s" ,userName);
	    	fscanf(archivo,"%s" ,userID );
	    	fscanf(archivo,"%i" , &userActivity );

	    	if (userActivity <= 0)
	    	{
	    		printf("%s\n", userName );
	    	}

	    	i++;
	    	if (i == 4)
	    	{
	    		break;
	    	}
	    	
	    }

        }
        fclose(archivo);
	return 0;
	}

	//--------------------------------------------------------------------------------------------------------------//

	else if (option == 4)
	{
		if (archivo == NULL)
        {
            printf("\nError de apertura del archivo. \n\n");
        }
        else
        {
        	printf("Procesando\n");
        }
        fclose(archivo);
    return 0;
	}
	
	//-----------------------------------------------------------------------------------------------------------------//

	else
	{
		printf("OPCIÓN NO VALIDA\n");
		fclose(archivo);
	}
}

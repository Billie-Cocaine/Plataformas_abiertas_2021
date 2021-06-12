/*

Andres Corrales Castro--------B72374
andres.corralescastro@ucr.ac.cr

Aaron Sibaja Garita-----------B77340
aaron.sibajagarita@ucr.ac.cr

Listas doblemente enazadas

Agregar y objetos segun prefencia del usuario

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
	struct node *prev;

	
} NODE;

NODE *MakeNode(int data);
int Insert_Begin(NODE **head, int data);
int Insert_End(NODE **head, int data);
void ImpList(NODE *head);
int Remove_Node(NODE **head, int data);
int Remove_Node_END(NODE **head, int data);
int DeleteLIST(NODE **head);




//Remove a node from the list head of the list

int Remove_Node(NODE **head, int data)
{
	NODE *actual = *head, *prv = NULL, *nxt = NULL;
	if (actual == NULL)
	{
		printf("LA LISTA ESTA VACIA\n");
	}

	while(actual != NULL)
	{
		if(actual->data == data)
		{
			if(actual == *head)
			{
				*head = actual->next;
				if( actual->next != NULL){
				    actual->next->prev = NULL; 
				}
			}
			else if( actual->next == NULL)
			{
			    prv = actual->prev;
			    actual->prev = NULL;
			    prv->next = NULL;
			    
			}
			else
			{	
				prv = actual->prev;
                actual->prev = NULL;
                prv->next = nxt;
                nxt->prev = prv;


			}
			free(actual);
			return 1;
		}
		actual = actual->next;
	}
	return 0;
}






//Insert at the end of the list

int Insert_End(NODE **head, int data)
{	

	NODE *newAux = *head;
	if (newAux == NULL)
	{
		printf("LA LISTA SE ENCUENTRA SIN DATOS, DEBE AGREGAR UN DATO AL INICIÓ CON LA OPCIÓN 1\n");
	}
	else
	{
		NODE *new = NULL, *newAux = *head;

		new = MakeNode(data);
		if(new != NULL)
		{
			while(newAux->next != NULL){newAux = newAux->next;}
			new->prev = newAux;
			newAux->next = new;
			return 1;
		}
	}
	return 0;
}

//Print the list

void ImpList(NODE *head)
{
	NODE *newAux = head;
	if (newAux == NULL)
	{
		printf("LA LISTA SE ENCUENTRA SIN DATOS \n");
	}

	while(newAux != NULL)
	{
		printf("Dato: %d\n", newAux->data);
		newAux = newAux->next;

	}

}

//Insert at the beginning of the list

int Insert_Begin(NODE **head, int data)
{
	NODE *new = NULL;

	new = MakeNode(data);
	if(new != NULL)
	{
	   new->next = *head;
	   new->prev = NULL;
	   if(*head != NULL)
		(*head)->prev = new;
	   *head = new;
	   return 1;
	}
	return 0;
}

//Create a new node

NODE *MakeNode(int data)
{
	NODE *new = NULL;

	new = (NODE*)malloc(sizeof(NODE));
	if (new != NULL)
	{
	    new->data = data;
	    new->next = NULL;
	    new->prev = NULL;
	}
	return new;
}


int DeleteLIST(NODE **head){ // Remove whole list

	
	NODE *actual = *head;
	if (actual != NULL)
	{
		*head = actual->prev;
		if( actual->next != NULL)
		{
		actual->next->next = NULL; 
		}
		free(actual);
		printf("SE ELIMINARON LOS DATOS DE LA LISTA  \n");
	}
	else{
		printf("LA LISTA NO TIENE DATOS\n");
		printf("    \n");
	}
	




}




int main()
{
	NODE *head = NULL;
	
	int LOOP = 1;

	

	while(LOOP==1){

		int opt;
		printf("MANEJO DE LISTAS DOBLES\n\nOPCIONES:\n"); 
		printf("1-Insertar un nodo al inicio de la lista \n"); // COMPLETA
		printf("2-Eliminar un nodo al inicio de la lista  o al final de la lista\n");// COMPLETA
		printf("3-Insertar un nodo al final de la lista \n");// COMPLETA
		//printf("4-Insertar un nuevo nodo después de un nodo específico \n");
		//printf("5-Eliminar un nodo después de un nodo específico \n");
		//printf("6-Insertar un nuevo nodo antes de un nodo específico \n");
		//printf("7-Eliminar un  nodo antes de un nodo específico \n");
		printf("8-Eliminar la lista completa \n");//COMPLETA
		printf("9-Imprimir la lista \n");// COMPLETA
		printf("10-Terminar programa \n");// COMPLETA
		printf("DIGITE LA OPCIÓN:\n");
		scanf("%i",&opt);


		if(opt == 1)
		{
			int addDATA;
			printf("  \n");
			printf("DIGITE EL DATO QUE QUIERE AGREGAR: \n");
			scanf("%i", &addDATA);
			Insert_Begin(&head,addDATA);
			int LOOP;
			printf("DIGITE 1 PARA TERMINAR EL PROGRAMA O DIGITE 9 PARA VER LA LISTA:\n");
			scanf("%i",&LOOP);
			if (LOOP == 1 )
			{
				printf("SE FINLIZO EL PROGRAMA\n");
				break;
			}
			if(LOOP == 9){
				ImpList(head);
				int LOOP;
				printf("DIGITE 1 para continuar al menú principal o cualquier otra tecla para terminar:\n");
				scanf("%i",&LOOP);
				if (LOOP !=1 )
				{
					printf("SE FINLIZO EL PROGRAMA\n");
					break;
				}

			}

		}

		if (opt == 2)
		{
			int deleteNODE;
			printf("DATOS EN LA LISTA:\n");
			ImpList(head);
			printf("    \n");
			printf("DIGITE EL NODO QUE QUIERE ELIMINAR: \n");
			scanf("%i", &deleteNODE);
			Remove_Node(&head, deleteNODE);

			int LOOP;
			printf("DIGITE 1 para continuar:\n");
			scanf("%i",&LOOP);
			if (LOOP !=1 )
			{
				printf("SE FINLIZO EL PROGRAMA\n");
				break;
			}
		}

		if (opt == 3)
		{
			int addDATA;
			printf("DIGITE EL DATO QUE QUIERE AGREGAR: \n");
			scanf("%i", &addDATA);
			Insert_End(&head,addDATA);
			int LOOP;
			printf("DIGITE 1 para continuar:\n");
			scanf("%i",&LOOP);
			if (LOOP !=1 )
			{
				printf("SE FINLIZO EL PROGRAMA\n");
				break;
			}

		}

		if (opt == 8)
		 {
		 	DeleteLIST(&head);
		 	int LOOP;
			printf("DIGITE 1 para continuar:\n");
			scanf("%i",&LOOP);
			if (LOOP !=1 )
			{
				printf("SE FINLIZO EL PROGRAMA\n");
				break;
			}

		 }

		if (opt == 9)
		{
			printf("DATOS EN LA LISTA\n");
			ImpList(head);
			printf("  \n");
			int LOOP;
			printf("DIGITE 1 para continuar:\n");
			scanf("%i",&LOOP);
			if (LOOP !=1 )
			{
				printf("SE FINLIZO EL PROGRAMA\n");
				break;
			}
		}

		if (opt== 10)
		{
			printf("SE FINLIZO EL PROGRAMA\n");
			break;
		}

	}
	
	

	return 0;



}

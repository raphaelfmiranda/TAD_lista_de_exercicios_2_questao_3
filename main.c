#include "listaEncadeada.h"

int main()
{
	struct node *lista;
    int choice;
	int nDigitado;
	int maior_valor_na_lista;
	float media;



    while(1)
	{
		printf(	"										\n"
			   	"======================================	\n"
			   	"\t\tM E N U							\n"
			   	"======================================	\n"
			   	"1. Inicializar a lista					\n"
			   	"2. Verificar se lista eh vazia			\n"
			   	"3. Inserir elemento. 					\n"
			   	"4. Remover elemento. 					\n"
			   	"5. Mostrar tamanho da lista. 			\n"
				"6. Remover elemento na posicao p       \n"
			   	"7. Imprimir a lista. 					\n"
			   	"8. Sair 								\n"
				"======================================	\n"
			   ">>> Digite a opcao desejada: ")        	;	scanf("%d", &choice);



        switch(choice)
		{
			case (1):
				lista_inicializar(&lista)	;	printf("\n Lista inicializada!\n")	;	break;
			


			case (2):
				if(lista_esta_vazia(&lista))
				{
 					printf("A lista esta vazia.\n");
				}
				else
				{
					printf("A lista nao esta vazia.\n");
				}
				break;


			case (3):
				printf("Digite o valor para insercao: ")	;	scanf("%d",&nDigitado);
				if (lista_insere_elemento(&lista , nDigitado))
				{
					printf("%d foi inserido na lista.\n" , nDigitado);
				}
				else
				{
					printf("Erro ao inserir valor. Tente Novamente\n");
				}
				break;
			


			case (4):
				printf("\n Digite o valor que deseja remover: ")	;	scanf("%d",&nDigitado);
				if (lista_remover_elemento(&lista , nDigitado))
				{
					printf("%d foi removido." , nDigitado);

					print_lista(lista);
				}
				else
				{
					printf("Erro ao remover valor. Tente novamente.");
				}
				break;
			


			case (5):
				printf("\n Tamanho da lista: %d \n", lista_tamanho(lista));
				break;


			case (6):
				printf("\n Digite a posicao do valor que deseja remover: ")	;	scanf("%d",&nDigitado);
				if (lista_remover_posicao(&lista , nDigitado))
				{
					printf("%d foi removido." , nDigitado);

					print_lista(lista);
				}
				else
				{
					printf("Erro ao remover valor. Tente novamente.");
				}
                break;



			case (7):
				print_lista(lista)		;	break;



			case (8):
				lista_free(lista);
				printf(	"										\n"
			   			"======================================	\n"
						">>> Voce encerrou o programa.			\n"
						"======================================	\n")	;	exit(1);
			


			default:
				printf(	"										\n"
			   			"======================================	\n"
						"A opcao digitada nao existe			\n"
						"======================================	\n")	;	break;
        }
    }
	return 0;
}
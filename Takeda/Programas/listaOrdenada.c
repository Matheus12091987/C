#include <stdio.h>
#include <stdlib.h>

typedef struct Lista {
    int RA;
    struct Lista *prox;
} Lista;


void menu();
void inserir(Lista **ini, Lista **f);
void listar(Lista *ini);
Lista* remover(Lista **ini, Lista **f);

void main(void) {

    Lista *inicio = NULL, *fim;

    char op;
    do {
        menu();
        scanf(" %c", &op);
        switch(op) {
            case '1':
                inserir(&inicio, &fim);
                break;
            case '2':
                listar(inicio);
                break;
            case '3':
                remover(&inicio, &fim);
                break;
            case '5':
                exit(0);
                break;
        }
    } while(op != '5');
}


void menu() {

    printf("\n1 - Inserir registro.");
    printf("\n2 - Listar registros arquivados.");
    printf("\n3 - Remover registro.");
    printf("\n5 - Sair.\n");
    printf("\nSelecione a opção desejada: ");

}

void inserir(Lista **ini, Lista **f) {

    Lista *novo = (Lista*)malloc(sizeof(Lista));

    if (novo == NULL) {
        printf("Memória insuficiente!");
        exit(1);
    }

    printf("RA: ");
    scanf("%d", &novo->RA);
    novo->prox = NULL;
	if (*ini == NULL) {
			*ini = novo;
            *f = novo;
	} else {
        if (novo->RA > (*f)->RA) {
            (*f)->prox = novo;
            *f = novo;
        } else {
            Lista *aux = *ini;
            if (*ini == *f) {
                *ini = novo;
                novo->prox = *f;
            } else {
                while(aux->prox->RA < novo->RA) {
                    aux = aux->prox;
                }
                novo->prox = aux->prox;
                aux->prox = novo;
            }
        }
    }
	
}

void listar(Lista *ini) {

    if (ini == NULL)
        printf("\nNão há registros no arquivo!");
    else {
        while(ini != NULL) {
            printf("\nRA: %d", ini->RA);
            ini = ini->prox;
        }
    }
    printf("\n");
}


Lista* remover(Lista **ini, Lista **f) {

    if (*ini == NULL)
        printf("\nNão há registros no arquivo!");
    
    else {
        int rg;
        printf("Digite o registro que pretende remover: ");
        scanf(" %d", &rg);
        if (rg == (*ini)->RA) {
            Lista *aux = *ini;
            *ini = (*ini)->prox;
            free(aux);
        } else {
            Lista *aux = *ini;
            while(aux->prox->RA != rg) {
                aux = aux->prox;
            }
            if (aux->prox == *f) {
                Lista *rm = aux->prox;
                *f = aux;
                (*f)->prox = NULL;
                free(rm);
            } else {
                Lista *rm = aux->prox;
                aux->prox = rm->prox;
                free(rm);
            }
        }
    }
    
}
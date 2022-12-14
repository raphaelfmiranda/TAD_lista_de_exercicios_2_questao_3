#ifndef LISTA_ENC_H
#define LISTA_ENC_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct node{

    int data;
    struct node *prox;

};



void lista_inicializar(struct node **lista);

bool lista_esta_vazia(struct node **lista);

int lista_insere_elemento(struct node **lista , int new_data);

int lista_remover_elemento(struct node **lista , int data_to_remove);

int lista_tamanho(struct node *lista);

int lista_remover_posicao(struct node **lista , int pos_to_remove);

void lista_free(struct node *lista);

void print_lista(struct node *lista);

#endif
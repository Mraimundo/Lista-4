#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

int comprimento ( LISTA *lista){
	
	if (lista->ant==NULL)
	{
		printf("Estrutura: \n");
	}
	printf("%d\n", lista->valor);
	if (lista->prox != NULL)
	{
		comprimento(lista->prox);
		printf("\n\n");
	}
	return valor;
=======================================================================================================
};
void inverte ( LISTA *lista){
	
	{
		printf("Invertido: \n");
	}
	printf("%c", lista->valor);
	if (lista->prox != NULL)
	{
		show_CHAR(lista->prox);
		printf("\n\n");
	}
};
=========================================================================================================
struct int ultimo (Lista* lista){
	/*
		Retorna o espaço de memória do tamanho da struct "LISTA", basta passar como tamanho = 1;
	*/
	return ( (struct LISTA *) malloc(sizeof(struct LISTA) * tamanho) );
};
========================================================================================================
void concatena (Lista* l1, Lista* l2){
	Lista*p;
	Lista*q;
	if (l1 == NULL) return l2;
        p = l1
        do
	{
		p = p;
		p = p->prox;
	}
		while(p != NULL);
		q->prox = l2;
		return l1;
	}
=========================================================================================================
void retira_n (Lista* l, int x){
	Lista* p;
	Lista* q;
	for (p = l; p!= NULL; p = p -> prox)
	if (p -> info == x){
	
	q = p -> prox; p ->prox=NULL; return q;
	}

	{
		return NULL;
	}
========================================================================================================
Lista* separa (Lista* l, int x){
	
	p = (struct topoLista *) malloc(sizeof(struct topoLista));
	p->inicio = NULL;
	return p;
};
void finalizarLista(struct LISTA *lista){
	// Libera a memória de todos os itens na pilha
	if (lista->proximo != NULL && lista != NULL)
	{
		finalizarLista(lista->proximo);
		free(lista);
	}
};
void calcBin(int valor,int base,struct topoLista *topo){
	// Faz o calculo de base, se 2 calcula binário, se 10 decimal ,se 16 Hexadecimal ...
	if (valor==0)
	{
			return;
	}else if (valor>0)
	{
		empilha(valor%base,topo);
		calcBin(((valor-(valor%base))/base),base,topo);
	}else{
		printf("\n >>> Valor: não é válido %d\n", valor);
	}
};
struct LISTA_CHAR *alocar_CHAR(int tamanho){
	// Retorna o espaço de memória da struct "LISTA_CHAR"
	return ( (struct LISTA_CHAR *) malloc(sizeof(struct LISTA_CHAR) * tamanho) );
};
Lista* copia (Lista* l){
	
	struct LISTA_CHAR *temporaria =  alocar_CHAR(1);
	temporaria->valor = valorInput;
	temporaria->proximo = NULL;
	temporaria->anterior=NULL;
	if (varTopo->inicio != NULL)
	{
		temporaria->proximo=alocar_CHAR(1);
		temporaria->proximo=varTopo->inicio;
		varTopo->inicio->anterior = alocar_CHAR(1);
		varTopo->inicio->anterior = temporaria;
	}else{
		varTopo->inicio = alocar_CHAR(1);
		varTopo->fim = alocar_CHAR(1);
		varTopo->fim = temporaria;
	}
	varTopo->inicio = temporaria;
}
================================================================================================================
struct LISTA_CHAR *desempilha_CHAR(struct topoLista_CHAR *varTopo){
	
	struct LISTA_CHAR *temporaria =  alocar_CHAR(1);
	temporaria = varTopo->inicio;
	varTopo->inicio = varTopo->inicio->proximo;
	temporaria->proximo->anterior = NULL;
	temporaria->proximo = NULL;
	temporaria->anterior = NULL;
	return temporaria;
};
=============================================================================================================
void retira_inicio(Lista2* l){
	/*
		Ao receber ponteiro de topo, o mesmo retorna a struct "topoLista_CHAR" no topo
	*/
	p = (struct topoLista_CHAR *) malloc(sizeof(struct topoLista_CHAR));
	p->inicio = NULL;
	return p;
};
=============================================================================================================
void finalizarLista_CHAR(struct LISTA_CHAR *lista){
	// Libera a memória de todos os itens na pilha
	if (lista->proximo != NULL)
	{
		finalizarLista_CHAR(lista->proximo);
		free(lista);
	}
};

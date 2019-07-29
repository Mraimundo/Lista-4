#ifndef LISTA_H
#define LISTA_H

struct LISTA{
	struct LISTA *ant;
	int valor;
	struct LISTA *prox;
};
struct LISTA_CHAR{
	struct LISTA_CHAR *ant;
	char valor;
	struct LISTA_CHAR *prox;
};
struct topoLista{
	struct LISTA *inicio;
};
struct topoLista_CHAR{
	struct LISTA_CHAR *inicio;
	struct LISTA_CHAR *fim;
};
int comprimento (Lista* lista);
int maiores (Lista* l, int x);
int ultimo (Lista* l);
void concatena (Lista* l1,  Lista* l2);
void retira_n (Lista* l, int x);
Lista* separa (Lista* l, int x);
Lista* copia ( LISTA* l);
void para_circular (Lista* l);
void retira_inicio (Lista2* l);
void retira_final(Lista* l);

#endif
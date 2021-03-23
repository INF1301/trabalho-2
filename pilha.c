#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include "pilha.h"

struct pilha {
	Lista* lst;
};

Pilha *pilha_cria(void) {
	Pilha* p;
	p = (Pilha*)malloc(sizeof(Pilha));
	if (p == NULL) {
		printf("Problema de memoria!");
		exit(0);
	}
	p->lst = lst_cria();
	return p;
}

int pilha_vazia(Pilha *p) {
	return lst_vazia(p->lst);
}

void pilha_push(Pilha* p, void *v) {
	lst_insIni(p->lst, v);
}

void *pilha_pop(Pilha* p) {
	return lst_retIni(p->lst);
}

void pilha_libera(Pilha *p) {
	lst_libera(p->lst);
	free(p);
}

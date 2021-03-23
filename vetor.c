#include <stdio.h>
#include <stdlib.h>
#include "vetor.h"
#include <math.h>

struct vetor {
   float x,y;
};

Vetor *vet_cria(float x, float y) {
	Vetor *v=(Vetor*) malloc(sizeof(Vetor));

	if(v==NULL) {
		printf("Erro na alocacao de memoria\n");
		exit(1);
	}

	v->x=x;
	v->y=y;

	return v;

}

Vetor *vet_soma(Vetor *v1, Vetor *v2) {
	Vetor *v3=vet_cria(0.0,0.0);
	v3->x=v1->x+v2->x;
	v3->y=v1->y+v2->y;

	return v3;
}

float vet_norma(Vetor *v) {
	return pow(pow(v->x,2.0)+pow(v->y,2.0),0.5);
}

float vet_prod_int(Vetor *v1,Vetor *v2) {
	return v1->x * v2->x + v1->y * v2->y;
}

char *vet_format(Vetor *v, char *str) {
	sprintf(str,"(%.1f,%.1f)",v->x,v->y);
	return str;
}

void vet_libera(Vetor *v) {
	free(v);
}

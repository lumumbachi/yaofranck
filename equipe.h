#ifndef _EQU_
#define _EQU_
#include"date.h"

typedef struct Equipe{
	char nomEq[100];
	char matr[9];
	DateC date;
	int nbrepers;
	int jourtrv;
}Equipe;

Equipe enregistrement_equipe();
int rechercher_equipe(Equipe tabEquipe[], int n);

#endif
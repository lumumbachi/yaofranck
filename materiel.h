#ifndef _SEC_
#define _SEC_

typedef struct Materiel{
	int nbremate;
	char nommate[25];
	int validite;
}Materiel;

Materiel enregistrement_materiel();

#endif
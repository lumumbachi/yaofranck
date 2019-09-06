#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include"equipe.h"

Equipe enregistrement_equipe()
{
	Equipe tabEquipe;
printf("NOM DE L'EQUIPE: \n");
scanf("%s",tabEquipe.nomEq);
printf("MATRICULE DE L'EQUIPE: \n" );
scanf("%s",tabEquipe.matr);
printf("DATE: \n");
printf("JOUR:\n");
scanf("%d",&tabEquipe.date.jour);
while(tabEquipe.date.jour<0||tabEquipe.date.jour>31){
	printf("JOUR:\n");
	scanf("%d",&tabEquipe.date.jour);

}
printf("MOIS:\n");
scanf("%d",&tabEquipe.date.mois);
while(tabEquipe.date.mois<0||tabEquipe.date.mois>12){
	printf("MOIS:\n");
	scanf("%d",&tabEquipe.date.mois);
}
printf("ANNEE:\n");
scanf("%d",&tabEquipe.date.annee);
while(tabEquipe.date.annee<0||tabEquipe.date.annee>2019){
	printf("ANNEE:\n");
	scanf("%d",&tabEquipe.date.annee);
}
printf("NOMBRE DE PERSONNE:\n");
scanf("%d",&tabEquipe.nbrepers);
while(tabEquipe.nbrepers<0){
	printf("NOMBRE DE PERSONNES:\n");
	scanf("%d",&tabEquipe.nbrepers);
}
printf("EMPLOI DU TEMPS \n");
printf("COMBIEN DE JOURS TRAVAILLEZ VOUS? \n");
scanf("%d",&tabEquipe.jourtrv);
return tabEquipe;
}

int rechercher_equipe(Equipe tabEquipe[], int n)
{
	char mat[50];
	printf("Entrez le matricule de ton equipe \n");
        	scanf("%s",mat);
			for( int i=0;i<n;i++){
				if(strcmp(mat,tabEquipe[i].matr)==0){
                  return i;
				}
				else{
					return -1;
				}
			}
}
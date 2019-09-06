#include <stdio.h>
#include <stdlib.h>
#include"materiel.h"
#include"equipe.h"


Materiel enregistrement_materiel()
{
	Materiel tabMate;
	int mate;
printf("COMBIEN DE MATERIELS UTILISEZ VOUS? \n");
scanf("%d",&mate);

for(int k=0;k<mate;k++){
	printf("ENTREZ LE NOM DU MATERIEL %d: \n",k+1);
	scanf("%s",tabMate.nommate);
	printf("ENTREZ LE NOMBRE DU MATERIEL :\n");
	scanf("%d",&tabMate.nbremate);
	printf("ENTREZ LE TEMPS D'EXPIRATION EN JOUR :\n" );
	scanf("%d",&tabMate.validite);
}
				
			
}
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include"equipe.h"
#include"materiel.h"
   
#define TAILLE 6

Materiel tabmate[TAILLE];
Equipe tabequipe[TAILLE];
int z,mate,n,j,choix;
char mat[10];

int main()
{
  while(1){
     printf("QUE VOULEZ VOUS FAIRE \n");
     printf("1- CREATION D'EQUIPE \n");
     printf("2- EMPLOI DE TEMPS DE TON EQUIPE \n" );
     printf("3- EMPLOI DE TEMPS DE MAINTENACE \n");
     scanf("%d",&choix);
     while(choix<0 && choix>3){;
        
         printf("QUE VOULEZ VOUS FAIRE \n");
         printf("1- CREATION D'EQUIPE \n");
         printf("2- EMPLOI DE TEMPS DE TON EQUIPE \n" );
         printf("3- EMPLOI DE TEMPS DE MAINTENACE \n");
         scanf("%d",&choix);
         
        }
        if(choix==1)
        {

        	printf("VOULEZ VOUS CREER COMBIEN DE COMPTES?\n");
			scanf("%d",&n);
			while(n<0||n>6)
			{
                printf("VOUS POUVEZ CREER AU MAXIMUM 6 EQUIPES \n");
				printf("COMBIEN D'EQUIPES VOULEZ VOUS CREER? \n");
				scanf("%d",&n);
			}
			for(int i=0;i<n;i++)
			{
				tabequipe[i]=enregistrement_equipe();
				tabmate[i]=enregistrement_materiel();
				printf("MERCI D'ETRE PASSE ET VOTRE EQUIPE A ETE BIEN ENREGISTRE \n");
				system("pause");
				system("cls");
			}
		}
		else if(choix==2)
		{
			 int a=rechercher_equipe(tabequipe, TAILLE);
			 if(a!=-1)
			 	 printf("VOUS AVEZ %d JOURS DE TRAVAIL:",tabequipe[a].nbrepers);
			 else
			 	printf("DESOLE NOUS N'AVONS PAS TROUVE LE MATRICULE\n");
		}
		else if(choix==3)
		{
			int b=rechercher_equipe(tabequipe, TAILLE);
			if(b!=-1)
				printf("LA VALIDITE DE CE MATERIEL EST DE:%d",tabmate[b].validite);
			else
				printf("DESOLE NOUS N'AVONS PAS TROUVE LE MATRICULE\n");
		}
		else
			printf("DESOLE NOUS N'AVONS PAS TROUVE LE MATRICULE\n");
	}	
 	return 0;
}
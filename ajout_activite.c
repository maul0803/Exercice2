#include "main.h"
//b)ajout_activite
//-----------------------------------------------------------------------------------------------//
void ajout_activite(struct ordonnanceur *pointeurOrdonnanceur)
{
	int i=0;
	while ((*pointeurOrdonnanceur).fileProcessus[i].duree!=0)
	{
		i++;
	}
	printf("Entrer le nom du processus %d: \n",i+1);
	scanf("\n%[^\n\t]",(*pointeurOrdonnanceur).fileProcessus[i].nom);
	printf("Entrer la duree du processus %d: \n",i+1);
	scanf("%d",&(*pointeurOrdonnanceur).fileProcessus[i].duree);
	printf("Entrer la priorite du processus %d: \n",i+1);
	scanf("%d",&(*pointeurOrdonnanceur).fileProcessus[i].priorite);
}
//-----------------------------------------------------------------------------------------------//

#include "main.h"
//Initialisation de la file( permet d'initialiser de manière optimisé)
//-----------------------------------------------------------------------------------------------//
void initialisation(struct ordonnanceur *pointeurOrdonnanceur)
{
	int nbrProcessus,i;
	printf("Entrer le nombre de processus à ajouter, au plus 100: \n");
	scanf("%d",&nbrProcessus);
	for (i=0;i<nbrProcessus;i++)
	{
		printf("Entrer le nom du processus %d: \n",i+1);
		scanf("\n%[^\n\t]",(*pointeurOrdonnanceur).fileProcessus[i].nom);
		printf("Entrer la duree du processus %d: \n",i+1);
		scanf("%d",&(*pointeurOrdonnanceur).fileProcessus[i].duree);
		printf("Entrer la priorite du processus %d: \n",i+1);
		scanf("%d",&(*pointeurOrdonnanceur).fileProcessus[i].priorite);
	}
}
//-----------------------------------------------------------------------------------------------//

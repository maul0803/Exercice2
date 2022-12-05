#include "main.h"
//step
//-----------------------------------------------------------------------------------------------//
void step(struct ordonnanceur *pointeurOrdonnanceur)
{
	int testVide;
	testVide=estVide(&(*pointeurOrdonnanceur));
	if (testVide==1)//La liste n'est pas vide
	{
		printf("Le nom de l'activité est %s\nLa duree de l'activite est %d\n",(*pointeurOrdonnanceur).fileProcessus[0].nom,(*pointeurOrdonnanceur).fileProcessus[0].duree);
		sleep((*pointeurOrdonnanceur).fileProcessus[0].duree);//On attend que le processus soit finit
		defilement(&(*pointeurOrdonnanceur));
	}
}
//-----------------------------------------------------------------------------------------------//

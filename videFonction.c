#include "main.h"
//c)vide, permet d'initialiser la liste vide
//-----------------------------------------------------------------------------------------------//
void videFonction(struct ordonnanceur *pointeurOrdonnanceur)
{
	int i;
	for (i=0;i<100;i++)
	{
		sprintf((*pointeurOrdonnanceur).fileProcessus[0].nom,"%s","");
		(*pointeurOrdonnanceur).fileProcessus[i].duree=0;
		(*pointeurOrdonnanceur).fileProcessus[i].priorite=0;
	}
}
//-----------------------------------------------------------------------------------------------//

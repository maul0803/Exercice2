#include "main.h"
//Defilement défile la liste:décale tous les éléments de la liste vers la gauche en supprimant le premier terme
//-----------------------------------------------------------------------------------------------//
void defilement(struct ordonnanceur *pointeurOrdonnanceur)
{
	int i;
	for (i=1;i<100;i++)
	{
		sprintf((*pointeurOrdonnanceur).fileProcessus[i-1].nom,"%s",(*pointeurOrdonnanceur).fileProcessus[i].nom);
		(*pointeurOrdonnanceur).fileProcessus[i-1].duree=(*pointeurOrdonnanceur).fileProcessus[i].duree;
		(*pointeurOrdonnanceur).fileProcessus[i-1].priorite=(*pointeurOrdonnanceur).fileProcessus[i].priorite;
	}
}
//-----------------------------------------------------------------------------------------------//

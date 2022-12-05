#include "main.h"
//Est Vide, vérifie si la liste est vide
//-----------------------------------------------------------------------------------------------//
int estVide(struct ordonnanceur *pointeurOrdonnanceur)
{	
	int i=0;
	for (i=0;i<100;i++)
	{
		if ((*pointeurOrdonnanceur).fileProcessus[i].duree!=0)//Si il y a un procesus avec une durée non nulle, l'Ordonnanceur n'est pas vide
		{
			return 1;//Le processus n'est pas vide
		}
	}
	return 0;	
}
//-----------------------------------------------------------------------------------------------//

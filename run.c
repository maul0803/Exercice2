#include "main.h"
//run
//-----------------------------------------------------------------------------------------------//
void run(struct ordonnanceur *pointeurOrdonnanceur)
{
	while (estVide(&(*pointeurOrdonnanceur))==1)//La liste n'est pas vide
	{
		step(&(*pointeurOrdonnanceur));
	}
	printf("La file de processus est maintenant vide\n");
}
//-----------------------------------------------------------------------------------------------//

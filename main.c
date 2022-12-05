#include "main.h"
//main
//-----------------------------------------------------------------------------------------------//
int main(void)
{
	struct ordonnanceur Ordonnanceur;
	int i,nbProcessus;
	videFonction(&(Ordonnanceur));
	printf("Entrer le nombre de processus à ajouter\n");
	scanf("%d",&nbProcessus);
	for (i=0;i<nbProcessus;i++)
	{
		ajout_activite(&(Ordonnanceur));
	}
	run(&(Ordonnanceur));
	return 0;
}
//-----------------------------------------------------------------------------------------------//-

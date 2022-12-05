#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>
//a)strucures
//-----------------------------------------------------------------------------------------------//
struct processus
{
	char nom[10];
	int duree;
	int priorite;	
};
struct ordonnanceur
{
	struct processus fileProcessus[100];//tableau contenant le des processus, on considere su'il peut y en avoir une centaine
};
//-----------------------------------------------------------------------------------------------//
void videFonction(struct ordonnanceur *pointeurOrdonnanceur);
void ajout_activite(struct ordonnanceur *pointeurOrdonnanceur);
void defilement(struct ordonnanceur *pointeurOrdonnanceur);
int estVide(struct ordonnanceur *pointeurOrdonnanceur);
void step(struct ordonnanceur *pointeurOrdonnanceur);
void run(struct ordonnanceur *pointeurOrdonnanceur);
void initialisation(struct ordonnanceur *pointeurOrdonnanceur);


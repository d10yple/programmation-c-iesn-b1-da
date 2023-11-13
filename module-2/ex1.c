#include <stdio.h>

/*
 * Écrivez un programme qui demande et récupère la taille d’une 
 * personne et détermine si cette personne est autorisée à 
 * accéder à l’attraction.
*/

int main() {
	int tailleMin = 100, tailleMax = 200, taille;

	printf("Veuillez rentrer votre taille (en cm): ");
	scanf("%d", &taille);

	if (taille > tailleMax)
		printf("Accès refusé: trop grande taille\n");

	else if (taille < tailleMin)
		printf("Accès refusé: trop petite taille\n");

	else 
		printf("Accès autorisé!\n");
}

#include <stdio.h>

/*
 * Écrivez le programme qui demande et récupère un nombre entier.
 * Son contenu doit normalement être un nombre positif. 
 * Votre programme affiche respectivement "Correct !" ou "Erreur…" 
 * suivant la valeur de l'entier.
*/

int main() {
	int nombre;

	printf("Nombre: ");
	scanf("%d", &nombre);

	if (nombre != 0 && nombre > 0)
		printf("Correct!\n");

	else
		printf("Erreur..\n");
	
	return 0;
}

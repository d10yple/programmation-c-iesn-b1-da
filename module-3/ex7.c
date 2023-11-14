#include <stdio.h>

/* 
 * Écrivez le programme qui demande et récupère un nombre entier. 
 * Son contenu doit normalement être un nombre positif. 
 *
 * subtilité: le programme doit afficher "erreur" TANT QUE le nombre
 * ne respecte pas la condition (c'est à dire être entier positif différent
 * de 0).
*/

int main() {
	int number;
	
	printf("Nombre: ");
	scanf("%d", &number);

	while(number < 0 || number == 0) {
		printf("Erreur..\n");

		printf("Nombre: ");
		scanf("%d", &number);
	}

	printf("Correct!\n");

	return 0;
}

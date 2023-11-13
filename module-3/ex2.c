#include <stdio.h>

/*
 * Écrivez un programme qui, étant donné un nombre naturel obtenu 
 * de l’utilisateur, affiche la table de multiplication 
 * (de 1 à 10) de ce nombre.
*/

int main() {
	int number;

	printf("Quelle table dois-je afficher pour toi?: ");
	scanf("%d", &number);

	for(int i = 1; i <= 10; i++)
		printf("%dx%d=%d\n", i, number, i * number);

	return 0;
}

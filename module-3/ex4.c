#include <stdio.h>

/*
 * Écrivez un programme qui affiche la table de multiplication 
 * (de 1 à 10) de chaque naturel obtenu de l’utilisateur (0 pour terminer).
*/

int main() {
	int number;

	printf("Choisis une table à afficher:");
	scanf("%d", &number);

	while(number != 0) {
		for(int i = 1; i <= 10; i++){
			printf("%dx%d=%d\n", i, number, i * number);
		}

		printf("Choisis une table à afficher:");
		scanf("%d", &number);
	}

	return 0;
}

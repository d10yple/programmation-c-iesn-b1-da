#include <stdio.h>

/*
 * Écrivez un programme qui affiche la table de multiplication 
 * (de 1 à 10) des nombres 5 à 7.
*/

int main() {
	for (int i = 5; i <= 7; i++){
		for (int k = 1; k <= 10; k++){
			printf("%dx%d=%d\n", k, i, k*i);
		}
	}

	return 0;
}

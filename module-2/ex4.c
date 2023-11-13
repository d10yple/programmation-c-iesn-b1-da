#include <stdio.h>

/*
 * Écrivez un programme qui demande et récupère 3 nombres entiers.
 * Ce programme affiche "Correct !" si le troisième nombre entré 
 * est bien la somme des deux premiers ; sinon, il affiche un 
 * message d'erreur et la bonne solution…
*/

int main() {
	int a, b, guess;

	printf("Premier nombre: ");
	scanf("%d", &a);

	printf("Deuxième nombre: ");
	scanf("%d", &b);
	
	printf("Et finalement la somme: ");
	scanf("%d", &guess);

	if (guess == a + b)	
		printf("Correct!\n");

	else
		printf("Raté! Vous auriez du répondre %d!\n", a + b);

	return 0;
}

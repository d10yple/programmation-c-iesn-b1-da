#include <stdio.h> 

/*
 * Écrivez le programme qui détermine et affiche le prix à payer 
 * par une personne qui s’inscrit à l’atelier et dont on obtient l’âge.
*/

int main() {
	int age;

	printf("Quel est ton âge: ");
	scanf("%d", &age);

	if (age >= 6 && age <= 11)
		printf("Vous devrez payer 100euro!\n");

	else if (age >= 12 && age <= 18)
		printf("Vous devrez payer 120euro!\n");

	else if (age > 18)
		printf("Vous devrez payer 160euro!\n");

	else
		printf("Il faut avoir au minimum 6 ans pour participer!");

	return 0;
}

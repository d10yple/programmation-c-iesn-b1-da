#include <stdio.h>

/*
 * écrivez le programme qui calcule et affiche le prix total à 
 * payer par la famille pour effectuer la visite
*/

int main() {
	int age;
	double prixTotal = 0;

	while (age != -1) {
		printf("Quel âge avez vous pour la visite du chateau?: ");
		scanf("%d", &age);	

		if (age >= 12 && age <= 17)
			prixTotal += 4;

		if (age >= 18 && age <= 64)
			prixTotal += 7.5;

		if (age >= 65)
			prixTotal += 6.5;
	}

	printf("Vous devrez payer un montant total de: %.2lfeuros!", prixTotal);

	return 0;
}

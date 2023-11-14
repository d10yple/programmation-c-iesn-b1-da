#include <stdio.h>

/*
 * Sachant que l’on introduit pour chaque coureur, son identifiant 
 * (un code entier, -1 pour terminer) et sa place dans la course,
 * écrivez le programme permettant d’afficher l’identifiant et la 
 * prime à recevoir pour les 10 premiers ainsi que le nombre de 
 * t-shirts à offrir.
*/

int main() {
	int identifiantCoureur, placeDansLaCourse, nombreTShirt = 0, cashPrize;

	while(1) {
		printf("Identifiant du coureur: ");
		scanf("%d", &identifiantCoureur);

		if (identifiantCoureur == -1)
			break;

		printf("Sa place dans la course: ");
		scanf("%d", &placeDansLaCourse);

		if (placeDansLaCourse == 1)	
			cashPrize = 400;

		else 
			cashPrize = placeDansLaCourse <= 17 ? 300 - ((placeDansLaCourse - 2) * 20) : 0;
			nombreTShirt = placeDansLaCourse > 10 ? placeDansLaCourse - 10 : 0;

		printf("id: %d, place:%d, cashprize: %d, tshirts distribués (au total): %d\n", identifiantCoureur, placeDansLaCourse, cashPrize, nombreTShirt);
	}

	return 0;
}

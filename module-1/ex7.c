#include <stdio.h>

/*
 * Écrivez un programme qui calcule et affiche le nombre de plants 
 * de fleur à acheter sachant que l’on obtient la longueur en mètres
 * et la largeur en mètres du parterre rectangulaire à fleurir ainsi 
 * que la quantité de fleurs à planter par m².
*/

int main() {
	int fleursNecessaires, quantiteFleursAPlanter, longueur, largeur;

	printf("Longueur (en mètres): ");
	scanf("%d", &longueur);
	
	printf("Largeur (en mètres): ");
	scanf("%d", &largeur);

	printf("Quantités de fleurs à planter (par m2): ");
	scanf("%d", &quantiteFleursAPlanter);

	fleursNecessaires = (longueur*largeur) * quantiteFleursAPlanter;

	printf("Vous aurez besoin de %d plants!\n", fleursNecessaires);

	return 0;
}

#include <stdio.h>

int main() {
	int nombreDePlacesAdultes, nombreDePlacesJeunes;
	double prixTotal;

	printf("Nombre de places adultes: ");
	scanf("%d", &nombreDePlacesAdultes);

	printf("Nombre de places jeunes: ");
	scanf("%d", &nombreDePlacesJeunes);

	prixTotal = nombreDePlacesJeunes * 5.5 + nombreDePlacesAdultes * 6.5;

	printf("Prix total: %.1lf euros\n", prixTotal);

	return 0;
}

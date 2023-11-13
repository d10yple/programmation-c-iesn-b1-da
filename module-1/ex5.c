#include <stdio.h> 

/*
 * Un producteur de cidre doit placer sa production en bouteilles 
 * de 80 cl. Écrivez un programme qui obtient la production totale 
 * (exprimée en litres) puis affiche le nombre de bouteilles qui 
 * pourront être entièrement remplies ainsi que la quantité 
 * (en centilitres) de cidre restante.
 */

int main() {
	int productionTotale, nombrePetitesBouteilles, resteDeProduction;
	
	printf("Production totale (en L): ");
	scanf("%d", &productionTotale);

	productionTotale *= 100;
	nombrePetitesBouteilles = productionTotale / 80;
	resteDeProduction = productionTotale % 80;

	printf("Nombre de petites bouteilles remplies: %d\nReste de production: %dcl\n", nombrePetitesBouteilles, resteDeProduction);
	
	return 0;
}

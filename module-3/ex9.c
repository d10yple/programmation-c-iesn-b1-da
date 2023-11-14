#include <stdio.h>
#include <math.h>

/*
 * Étant donné un nombre entier n strictement positif obtenu de 
 * l’utilisateur, faites imprimer les n premiers nombres pairs et leur carré
*/

int main() {
	int nombre;

	printf("Nombre: ");
	scanf("%d", &nombre);	

	while (nombre > 0) {
		printf("Nombre pairs\tCarrés\n");
		
		for (int i = 2; i <= nombre * 2; i+=2)
			printf("%d\t%d\n", i, (int) pow(i, 2));
			
		printf("Nombre: ");
		scanf("%d", &nombre);
	}

	printf("L'entier doit être strictement positif!\n");

	return 0;
}

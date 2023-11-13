#include <stdio.h>

/*
 * Écrivez un programme qui, étant donnés deux nombres réels obtenus 
 * de l'utilisateur, permet de déterminer le signe du produit 
 * (positif, négatif ou nul), sans effectuer l'opération mais en 
 * se basant sur les signes de chacun des deux nombres.
*/

int main() {
	int a, b;

	printf("Nombre 1: "); 
	scanf("%d", &a);

	printf("Nombre 2: ");
	scanf("%d", &b);

	if ((a < 0 && b < 0) || (a > 0 && b > 0))
		printf("Produit positif!\n");

	else if (a == 0 || b == 0)
		printf("Produit nul!\n");

	else
		printf("Produit négatif!\n");

	return 0;
}

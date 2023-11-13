#include <stdio.h>

/*
 * Écrivez un programme qui, après avoir obtenu un nombre 
 * entier, affiche s’il est pair ou impair.
*/

int main() {
	int number;

	printf("Nombre: ");
	scanf("%d", &number);

	if (number % 2 == 0)
		printf("%d est pair!\n", number);

	else
		printf("%d est impair!\n", number);

	return 0;
}

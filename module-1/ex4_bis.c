#include <stdio.h>

/*
 * Le but ici est d'écrire un programme qui obient deux entiers, les
 * enregistres dans deux et qui échange ensuite leurs valeurs
 *
 * Dans cet exemple, on utilise l'opérateur XOR pour échanger les valeurs
 * de a et b.
*/
int main() {
	int a, b;

	printf("Nombre 1:");
	scanf("%d", &a);

	printf("Nombre 2:");
	scanf("%d", &b);

	printf("Avant échange: \n\ta=%d\n\tb=%d\n", a, b);

	a ^= b;
	b ^= a;
	a ^= b;

	printf("Après échange: \n\ta=%d\n\tb=%d\n", a, b);

	return 0;
}

#include <stdio.h>

/*
 * Le but ici est d'écrire un programme qui obient deux entiers, les
 * enregistres dans deux et qui échange ensuite leurs valeurs
*/
int main() {
	int a, b, tempo;

	printf("Nombre 1:");
	scanf("%d", &a);

	printf("Nombre 2:");
	scanf("%d", &b);

	printf("Avant échange: \n\ta=%d\n\tb=%d\n", a, b);

	tempo = a;
	a = b;
	b = tempo;

	printf("Après échange: \n\ta=%d\n\tb=%d\n", a, b);

	return 0;
}

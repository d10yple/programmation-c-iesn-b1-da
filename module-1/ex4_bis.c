#include <stdio.h>

/*
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

	/*
		Explication XOR (^) bit à bit
		a = 13 (1101)
		b = 2 (0010)

		a = a ^ b (1101 ^ 0010 = 1111) = 15
		b = a ^ b (1111 ^ 0010 = 1101) = 13
		a = a ^ b (1111 ^ 1101 = 0010) = 2

		a = 2
		b = 13
	*/
	a ^= b;
	b ^= a;
	a ^= b;

	printf("Après échange: \n\ta=%d\n\tb=%d\n", a, b);

	return 0;
}

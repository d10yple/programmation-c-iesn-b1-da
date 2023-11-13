#include <stdio.h>

/*
 * Écrivez un programme qui, après avoir obtenu deux entiers, 
 * numérateur et dénominateur d'une fraction, calcule sa valeur 
 * via une division réelle, puis via une division entière, et enfin affiche 
	•	les deux entiers sous la forme d'une fraction, 
	•	le premier résultat sous la forme d'un réel (4 décimales affichées) et 
	•	le deuxième résultat.
*/

int main() {
	int a, b;
	
	printf("Numérateur: ");
	scanf("%d", &a);

	printf("Dénominateur: ");
	scanf("%d", &b);

	printf("%d/%d = %.4lf = %d\n", a, b, (double) a/b, a/b);
	
	return 0;
}

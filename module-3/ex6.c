#include <stdio.h>

/*
 * Écrivez un programme qui, sur base de l’âge d'un certain nombre 
 * d'étudiants, obtenus de l’utilisateur, affiche l'âge du plus 
 * jeune ainsi que l'âge du plus âgé.
*/

int main() {
	int age, lePlusJeune = 0, lePlusVieux = 0;

	printf("Quel âge as-tu?");
	scanf("%d", &age);

	while(age != 0) {
		if (age > lePlusVieux)
			lePlusVieux = age;

		if (lePlusJeune == 0 || age < lePlusJeune)
			lePlusJeune = age;

		printf("Quel âge as-tu?");
		scanf("%d", &age);
	}

	printf("Le plus vieux: %dans\nLe plus jeune: %dans\n", lePlusVieux, lePlusJeune);

	return 0;
}

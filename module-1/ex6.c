#include <stdio.h>

/*
 * Sachant que la variable tempsSec contient un nombre entier 
 * positif représentant un temps exprimé en secondes, écrivez 
 * un programme qui exprime ce temps en heures, minutes et secondes.
*/
int main() {
	int tempsSec, heures, minutes, secondes;

	printf("Temps en secondes: ");
	scanf("%d", &tempsSec);

	heures = tempsSec / 3600;
	minutes = (tempsSec % 3600) / 60; 
	secondes = tempsSec % 60;

	printf("%d secondes = %d heures(s), %d minute(s) et %d seconde(s)\n", tempsSec, heures, minutes, secondes);

	return 0;
}

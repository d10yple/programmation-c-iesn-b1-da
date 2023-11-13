#include <stdio.h>

/*
 *	Ecrire un programme qui obtient:
 *		- le prix HTVA d'un article
 *		- le nombres d'articles acheté 
 *		- le taux de TVA
 *
 *	Afficher le montant total avec TVA
*/
int main() {
	double prixHorsTVA, aPayer;
	int nombreArticles, tauxTVA;

	printf("Prix HTVA: ");
	scanf("%lf", &prixHorsTVA);

	printf("Nombre d'articles: ");
	scanf("%d", &nombreArticles);

	printf("Taux de TVA: ");
	scanf("%d", &tauxTVA);

	aPayer = (prixHorsTVA * nombreArticles) * (1.0 + (tauxTVA / 100.0));	

	printf("A payer: %.2lf euros pour vos %d article(s)\n", aPayer, nombreArticles);

	return 0;
}

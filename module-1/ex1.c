#include <stdio.h>

/*
 *
 * Les variables doivent être initialisées 
 * ou déclarées en début de programme, pour ce premier
 * exercice nous contournons un peu la règle, histoire
 * de tout mettre dans un seul et même fichier.
 *
*/
int main() {
	/*
	 * QUESTION 1
	 * -
	 * L'erreur vient du \t qui crée un tab à la place 
	 * d'afficher "\travaux". Ajouter \\ permet de prinnt
	 * directement un antislash.
	*/
	int nbFichiers = 60;

	printf("Les %d fichiers sont dans le répertoire \\travaux\n", nbFichiers);

	/*
	 * QUESTION 2
	 * - "%c" incorrect, \"%c\" pour afficher les ", sinon erreur
	 * - inverser les deux variables à afficher dans le print
	*/
	char initiale = 'Y';
	int nbEtd = 65;

	printf("%d étudiants ont \"%c\" comme initiale\n", nbEtd, initiale);	

	/*
	 * QUESTION 3
	 * - %d à la place de %lf pour la variable reduction
	 * - % à remplacer par %% pour afficher le symbole pourcent
	*/
	double prix = 200.5;
	double reduction = 10;

	printf("Prix: %.2lf euros avant la réduction de %.2lf %%.\n", prix, reduction);

	/*
	 * QUESTION 4
	 * - "long" est un mot clé réservé, il est impossible de l'utiliser.
	 * - (facultatif) correction des noms de variable
	*/
	char categorie = 'A';
	float longueur = 0.8, largeur = 0.8, hauteur = 1.5;

	printf("Frigo - catégorie %c - dimensions %.2fx%.2fx%.2f\n", categorie, longueur, largeur, hauteur);

	/*
	 * QUESTION 5
	 * - locationMoisKot remplacée par loyerKot
	 * - ajout de " pour faire fonctionner le printf multiligne
	 * - alignement des caractères sur la même ligne
	*/
	double loyerKot = 1100; 
	double charge = 112;
	double aPayerMois = loyerKot + charge;

	printf("Par mois: \n"
	"Loyer: %15.2f$\n"
	"Charges: %13.2f$\n"
	"-- A payer-- : %7.2f$\n", loyerKot, charge, aPayerMois);

	/*
	 * QUESTION 6
	 * - un des opérandes doit être double pour diviser et afficher un double
	 * - (facultatif) arrondir à 2 decimales la moyenne
	*/
	int nbEtudIG = 110;
	int nbEtudTI = 105;
	double moyenne = (double) (nbEtudIG + nbEtudTI) / 2;

	printf("En IG: %d\nEn TI: %d\nMoyenne: %.2lf\n", nbEtudIG, nbEtudTI, moyenne);

	return 0;
}

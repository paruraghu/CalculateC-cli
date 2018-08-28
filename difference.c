#include "calculate.h"


void difference(void) {


	double nombre1 = 0;
	double nombre2 = 0;
	double resultat_nombre;
	int choix = 0;
	int continuer = 1;

	printf("\nEntrez le premier nombre:\n");
	scanf("%lf", &nombre1);

	printf("Entrez le deuxième nombre:\n");
	scanf("%lf", &nombre2);

	resultat_nombre = nombre1 - nombre2;

	printf("\n\nLe résultat de %.3lf - %.3lf est %.3lf\n", nombre1, nombre2, resultat_nombre);

	printf("1/ Retour\n");
	printf("2/ Quitter\n");
	scanf("%d", &choix);

	while(continuer) {
		switch(choix) {

			case 1:
			menu_principal();
			continuer = 0;
			break;

			case 2:
			printf("Au revoir !\n");
			continuer = 0;
			break;

			default:
			printf("Saisie incorrecte...\n");
		}
	}

}

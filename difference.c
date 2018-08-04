#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "calculate.h"


void difference(void) {

	int nombre1 = 0;
	int nombre2 = 0;
	int resultat_nombre;
	int choix = 0;
	int continuer = 1;

	printf("\nEntrez le premier nombre:\n");
	scanf("%d", &nombre1);

	printf("Entrez le deuxième nombre:\n");
	scanf("%d", &nombre2);

	resultat_nombre = nombre1 - nombre2;

	printf("\n\nLe résultat de %d - %d est %d\n", nombre1, nombre2, resultat_nombre);

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
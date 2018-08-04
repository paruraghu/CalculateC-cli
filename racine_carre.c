#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "calculate.h"


void racine_carre(void) {
	
	
	int nombre = 0;
	int resultat_nombre;
	int choix = 0;
	int continuer = 1;

	printf("\nEntrez le nombre choisi:\n");
	scanf("%d", &nombre);

	resultat_nombre = sqrt(nombre);

	printf("\n\nLe résultat de √%d est %d\n", nombre, resultat_nombre);

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
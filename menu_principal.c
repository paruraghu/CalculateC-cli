#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "calculate.h"


void menu_principal(void) {

	int choix = 0;
	int continuer = 1;

	printf("\n\n|-------------------------------------------------------------------|");
	printf("\nChoisissez entre ces type d'opérations: \n");
	printf("\n1) Addition (x + x)");
	printf("\n2) Soustraction (x - x)");
	printf("\n3) Multiplication (x * x)");
	printf("\n4) Division (x ÷ x)");
	printf("\n5) Racine carré (√x)");
	printf("\n6) Quitter\n");
	scanf("%d", &choix);

	    while(continuer) {
	    	switch(choix) {
	    		 case 1:
	    		 somme();
	    		 continuer = 0;
	    		 break;

	    		 case 2:
	    		 difference();
	    		 continuer = 0;
	    		 break;
	    		 
	    		 
	    		 case 3:
	    		 produit();
	    		 continuer = 0;
	    		 break;

	    		 case 4:
	    		 quotient();
	    		 continuer = 0;
	    		 break;

	    		 case 5:
	    		 racine_carre();
	    		 continuer = 0;
	    		 break;

	    		 case 6:
	    		 printf("Au revoir !\n");
	    		 continuer = 0;
	    		 break;

	    		 default:
	    		 printf("Erreur de saisie...\n");
	    		continuer = 0;
	    	}
	    }
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "calculate.h"

#define TAILLE_CHAINE_ASCII_ART 1000

int main(void) {

		// Affichage du nom du jeu en Ascii Art
		char chaineAsciiArt[TAILLE_CHAINE_ASCII_ART];

		FILE* fichier = fopen("ascii-art.txt", "r+");

		if (fichier != NULL)
	    {
	    	for(int i = 0; i < 9; i++) {
	        	fgets(chaineAsciiArt, TAILLE_CHAINE_ASCII_ART, fichier);
	        	printf("%s", chaineAsciiArt);
	    	}

	    	printf("\n © Tous droits réservés a Mortim\n");

	        
	    }
	    else
	    {
	        
	        printf("Impossible d'ouvrir le fichier ascii-art.txt");
	    }

	    fclose(fichier);


	    // {-------------------------------------------------------------------------------------------------------------------------------------}

	    menu_principal();
	    

	                                                          
	return 0;
}

/* 
 * File:   Matrix.c
 * Author: isen
 *
 * Created on November 2, 2011, 2:05 PM
 */

#include <stdio.h>
#include <stdlib.h>

#define LIGNE 2
#define COLONNE 2

void create_matrix (int M[LIGNE][COLONNE]);

/*
 * 
 */
int main(int argc, char** argv) {
	
	printf("Entrez %d chiffres pour faire une matrice carr%ce: \n", LIGNE + COLONNE,130);

    int M[LIGNE][COLONNE];
    
    create_matrix(M);


    return (EXIT_SUCCESS);
}

void create_matrix(int M[LIGNE][COLONNE])
{
        int i, j;

	//On récupère les chiffres de la matrice
    for (i = 0; i < LIGNE; i++) {
        for (j = 0; j < COLONNE; j++) {
            scanf("%d", &M[i][j]);
        }
    };

	printf("\n");
	
	//On imprime à l'écran la matrice
    for (i = 0; i < LIGNE; i++) {
        for (j = 0; j < COLONNE; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    };
    
   
    
    
}

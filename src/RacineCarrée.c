/* 
 * File:   RacineCarrée.c
 * Author: isen
 *
 * Created on September 28, 2011, 2:38 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NFOIS 5

/*
 * 
 */
int main(int argc, char** argv) {


    int i;
    float x, racx;

    printf("bonjour\n");
    printf("Calculons %d racines carrees! \n", NFOIS);


    for (i = 0; i < NFOIS; i++) {
        printf("Entrez un number : ");
        scanf("%f", &x);

        if (x < 0.0)
            printf("Le number %.2f ne possede pas de racine carree \n");
        else {
            racx = sqrt(x);
            printf("Racine de %.2f = %f\n", x, racx);
        }
    }
    printf("travail termine - Au revoir");



    return (EXIT_SUCCESS);
}


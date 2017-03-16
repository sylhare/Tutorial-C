/* 
 * File:   Carré.c
 * Author: isen
 *
 * Created on September 28, 2011, 3:54 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int n, r;
    r = 1;

    do {

        if (r == 1) {
            printf("Donnez un number > 0 : ");
            scanf("%d", &n);

            if (n < 0) {
                printf("il faut un number > 0 !\n");
                continue; //On refait un tour de boucle sans éxécuter ce qu'il y a plus bas
            }

            printf("Son carr%c est : %d\n", 130, n * n);

            if (n == 0)
                goto sortie; //On sort de la boucle pour aller à sortie
        }
        else {
            break; //On sort de la boucle si r n'est pas égale à 1
        };


        printf("\nContinuer le programme ? (oui=1/non=0) : ");
        scanf("%d", &r);

    }while (n);

sortie:  
    printf("\nFin du programme");

    return (EXIT_SUCCESS);
}


/* 
 * File:   WordPlay.c
 * Author: isen
 *
 * Created on November 1, 2011, 10:46 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LGMAX 132
#define CAR 'e'

/*
 * 
 */
int main(int argc, char** argv) {

    char texte[LGMAX + 1], *adr;
    int ncar = 0, i;
    
    printf("Entrez une phrase :");
    printf("\nVoici le nombre de characteres : %d", strlen(gets(texte)));
    adr = texte;
    
    while (adr = strchr(adr, CAR)) {
        ncar = ncar + 1;
        adr = adr + 1;
    }
    printf("\nvotre texte comporte %d fois %c.", ncar, CAR);

    adr = texte;

    while (adr = strchr(adr, CAR)) {
        strcpy(adr, adr + 1);
    }
    printf("\nvoici votre texte prive des %c : ", CAR);
    puts(texte);


    return (EXIT_SUCCESS);
}


/* 
 * File:   Board_Address.c
 * Author: isen
 *
 * Created on November 8, 2011, 6:26 PM
 */

#include <stdio.h>
#include <stdlib.h>

#define TAILLE 5
/*
 * 
 */
int main(int argc, char** argv) {
    
    int Tableau1[TAILLE],Tableau2[TAILLE][TAILLE], i=0, j=0;                      // valeur des tableaux n'a pas d'importance ici

    for(i=0; i<TAILLE; i++)
    {
        printf("Addresse: %10.p case [%d] -- valeur: %d \n", Tableau1[i],i,Tableau1[i]);
    }
    
    i=0;
    printf("\n---\n\n");
    
    for(i=0; i<TAILLE; i++)
    {
        for(j=0; j<TAILLE; j++)
        {
           printf("Addresse: %10.p case  [%d - %d] -- valeur: %d \n", Tableau2[i][j],i,j,Tableau2[i][j]); 
        } 
    }
    
    return (EXIT_SUCCESS);
}


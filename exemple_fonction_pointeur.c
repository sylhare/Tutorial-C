/* 
 * File:   exemple_fonction_pointer.c
 * Author: isen
 *
 * Created on September 28, 2011, 2:38 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Les noms des fonctions peuvent être définies au début du programme
et écrit à la fin
*/
void demi(int*, int*);
void multi2(int*, int*);

/*
 * 
 */
int main(int argc, char** argv) {

    int variable1, variable2;

    printf("Entrez deux nombres : ");
    scanf("%d", &variable1);
    scanf("%d", &variable2);

    demi(&variable1, &variable2); 
    printf(" Voici la moitie (arrondie) de ces chiffres: %d  %d\n", variable1, variable2);

    multi2(&variable1, &variable2);
    printf(" Voici la moitie (arrondie) precedement trouvee multipliee par deux: %d  %d", variable1, variable2);

    return (EXIT_SUCCESS);
}

//Ici on travaille avec des pointeurs, les variables seront directement modifiés par la fonction
void demi(int *var1, int *var2) {
    *var1 = *var1 / 2;
    *var2 = *var2 / 2;

}

void multi2(int *var1, int *var2) {
    *var1 = *var1 * 2;
    *var2 = *var2 * 2;
}

       

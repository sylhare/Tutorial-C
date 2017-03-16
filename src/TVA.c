/* 
 * File:   TVA.c
 * Author: isen
 *
 * Created on September 28, 2011, 4:57 PM
 */

#include <stdio.h>
#include <stdlib.h>

#define TAUX_TVA 19.6

/*
 * 
 */
int main(int argc, char** argv) {
    
    double HorsTaxes, ToutesTaxesComprises, NetAPayer, TauxRemise, remise ;
    
    printf("Donnez le prix hors taxes : ");
    scanf("%lf",&HorsTaxes);
    
    ToutesTaxesComprises = HorsTaxes * (1.+ TAUX_TVA/100.);
    
    if(ToutesTaxesComprises < 1000.)
        TauxRemise =1.;
    
    else
         if (ToutesTaxesComprises < 2000)
            TauxRemise = 10.;
    
         else 
             if (ToutesTaxesComprises < 5000)
                 TauxRemise= 30.;
    
         	else 
              	TauxRemise = 55.;
    
    remise= ToutesTaxesComprises * TauxRemise / 100. ;
    NetAPayer= ToutesTaxesComprises - remise;
    
    printf("\nPrix TTC:\t%10.3f\n",ToutesTaxesComprises);
    printf("Remise: \t%10.3f\n",remise);
    printf("Net à payer: \t%10.3f\n",NetAPayer);
    
    return (EXIT_SUCCESS);
}


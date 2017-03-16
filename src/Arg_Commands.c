/* 
 * File:   Arg_Commands.c
 * Author: isen
 *
 * Created on November 8, 2011, 6:13 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/*
 * 
 */
int main(int argc, char** argv) {   // argc nombre d'arguments et argv[] tableau des arguments
    
    int i;
    
    char**Nb_Argument;
    
    printf ("mon nom de programme est : %s\n", argv[0]);
         
    if (argc>1)
    {
        for (i=1; i<argc; i++)
        {
            printf("argument n° %d : %s\n", i , argv[i]);
            Nb_Argument[i]=argv[i];
           
            
        }
    } else {
        printf("\npas d'arguments\n");
    }

    return (EXIT_SUCCESS);
}


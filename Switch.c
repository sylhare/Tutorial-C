/* 
 * File:   Switch.c
 * Author: isen
 *
 * Created on September 28, 2011, 3:14 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int n;
    
    printf ("Donnez un entier : ");
    scanf ("%d", &n);
    
    switch (n)
       {
        case 0 : printf ("z%cro\n", 130);
                 break;
                 
        case 1 : printf ("un\n");
                 break;
                 
        case 2 : printf ("deux\n");
                 break;
                 
        case 3 : printf("trois\n");
                 break;
          
		default : printf ("grand\n") ;
        }
        

    return (EXIT_SUCCESS);
}


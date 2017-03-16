/* 
 * File:   PrimeFactor.c
 * Author: isen
 *
 * Created on October 12, 2011, 1:54 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void factoring(int);

/*
 * 
 */
int main(int argc, char** argv) {

    int number, factor;

    printf("Enter a number:");
    scanf("%d", &number);


    printf("\nHere are the prime factors for this number: ");
    factoring(number);

    return (EXIT_SUCCESS);
}

void factoring(int number) {
	/* Output the number of prime factor of a given number */

    int middle, factor, i;

    i = 2;
    middle = number / 2;

    if (number == 1) {
        printf("%d", number);
    } else {
        while (i <= middle) {
            factor = number % i;

            if (factor == 0) {
                printf("%d ", i);

                number=number/i;
            }
            else
            {
               i = i + 1;  
            }
           
        }
    }

}

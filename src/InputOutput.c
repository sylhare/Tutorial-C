/* 
 * File:   Input and Output.c
 * Author: isen
 *
 * Created on September 28, 2011, 2:21 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
	int a, b;
	char s[64];

    printf("Enter two values : ");
    scanf("%d %d", &a, &b);
    printf("Values : %d and %d", a, b);
    
    printf("\nDoes it work ? ");
    scanf(" %s", &s);
    printf("What you said : %s", s);
    
    
    printf("\nFinsh\n");

    
    
    return (EXIT_SUCCESS);
}


#include <stdio.h>

//Simplify for getting and putting strings
int main() {
    char a[100];

    gets(a); 

    printf("You entered: ");
    puts(a); 

    return 0;
}
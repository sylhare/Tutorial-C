#include <stdio.h>

int main() {
    int x = 5;
    int y;
    int *p = NULL;
    p = &x;
    
    y = *p + 2; /* y is assigned 7 */
    y += *p;     /* y is assigned 12 */
    *p = y;       /* x is assigned 12 */
    (*p)++;      /* x is incremented to 13 */

    printf("p is pointing to the value %d\n", *p); 
}
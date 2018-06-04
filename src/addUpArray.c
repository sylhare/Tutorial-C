#include <stdio.h>

// adds a up the content of the array up to the limit
int add_up (int *a, int limit);

int main() {
    int orders[5] = {100, 220, 37, 16, 98};

    printf("Total orders is %d\n", add_up(orders, 5)); 

    return 0;
}

// limit must be smaller than the array's length
int add_up (int *a, int limit) {
   int total = 0;
   int k;

   for (k = 0; k < limit; k++) {
        total += a[k];
   }

    return (total);
}
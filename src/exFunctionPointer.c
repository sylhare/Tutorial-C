#include <stdio.h>

int * get_evens();

int main() {
    int *a;
    int k;

    a = get_evens(); /* get first 5 even numbers */
    for (k = 0; k < 5; k++)
      printf("%d\n", a[k]); 

    return 0;
}

int * get_evens () {
   static int nums[5];
   int k;
   int even = 0;

   for (k = 0; k < 5; k++) {
        nums[k] = even += 2;
   }

    return (nums);
}
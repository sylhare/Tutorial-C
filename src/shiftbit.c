#include<stdio.h>

int main() {
   char *str = "ABCD";
   // Type cast each character to an unsigned int
   unsigned int a = (unsigned) str[0];
   unsigned int b = (unsigned) str[1];
   unsigned int c = (unsigned) str[2];
   unsigned int d = (unsigned) str[3];
   // Shift bits
   a = a << 24;
   b = b << 16;
   c = c << 8;

   // Combine 4 into 1
   unsigned int result = a | b | c | d;
   printf("\n %d %d %d %d : %d", a, b, c, d, result);
}

// 01 - Exercise 1: Quotient and Remainder
#include <stdio.h>
#include <math.h>
// Main function
int main()
{
   // Variable declaration
   long long a, b, quotient, remainder;

   // Input
   do
   {
      scanf("%lld %lld", &a, &b);
   } while (b == 0);

   // Processing
   quotient = a / b;
   remainder = a % b;

   // Ouput
   printf("%lld %lld", quotient, remainder);

   return 0;
}

// 01 - Exercise 2: Evaluate an Expression

#include <stdio.h>

// Main function
int main()
{
   // Variable declarations
   int x;
   long long result;

   // Input
   scanf("%d", &x);

   // Processing
   result = 1ll * x * x * x + 3ll * x * x + x + 1;

   // Output
   printf("%lld", result);

   return 0;
}

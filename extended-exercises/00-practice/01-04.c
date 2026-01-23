// 01 - Exercise 4: Sum, Difference, Product, and Quotient
#include <stdio.h>
// Main variable
int main()
{
   // Variable declarations
   int a, b, sum, dif;
   long long pro;
   double quo;
   // Input
   scanf("%d%d", &a, &b);
   // Processing
   sum = a + b;
   dif = a - b;
   pro = 1ll * a * b;
   quo = (double)a / b;
   // Output
   printf("%d %d %lld %.2f", sum, dif, pro, quo);
   return 0;
}
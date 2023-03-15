#include<stdio.h>

int main() 
{
  double a, b, c, temp;
  
  printf("Enter first number: ");
  scanf("%lf", &a);
  
  printf("Enter second number: ");
  scanf("%lf", &b);
  
  printf("Enter third number: ");
  scanf("%lf", &c);
  
temp = b;
   b = a;
   a = c;
   c = temp;

  printf("\nAfter swapping, a = %.2lf\n", a);
  printf("After swapping, b = %.2lf\n", b);
   printf("After swapping, c = %.2lf", c);
  return 0;
}

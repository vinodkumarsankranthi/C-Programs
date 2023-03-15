#include<stdio.h> 
 
 int main()    
{    

int a, b, c;      
printf("Enter first number: ");
  scanf("%d", &a);
  
  printf("Enter second number: ");
  scanf("%d", &b);
  
  printf("Enter third number: ");
  scanf("%d", &c);
  
printf("Before swap a=%d b=%d c=%d",a,b,c);   
   

   a = a + b + c;
   b = a - (b + c);
   c = a - (b + c);
   a = a - (b + c);
   
printf("\nAfter swap a=%d b=%d c=%d",a,b,c);    
return 0;  
}   

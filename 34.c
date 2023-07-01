#include <stdio.h> 
long int factorial(int n);
void main()
{
     int n;
     printf("Enter a positive integer: "); 
     scanf("%d", &n);
     printf("Factorial of %d = %ld", n, factorial(n));
     getch();
}
long int factorial(int n)
{
     if (n >= 1)
     return (n*factorial(n-1)); 
     else
     return (1); 
}

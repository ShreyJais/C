//C program using functions to find GCD and LCM of two numbers.
#include <stdio.h> 
void main() {
     int num1, num2, gcd, lcm; int GCD(int,int);
     printf("Enter two numbers\n"); 
     scanf("%d%d", &num1, &num2); 
     gcd = GCD(num1, num2);
     lcm = (num1 * num2) / gcd;
     printf("GCD of %d and %d = %d\n",num1, num2, gcd);
     printf("LCM of %d and %d = %d\n",num1, num2, lcm);
     getch();
     }
     int GCD(int x,int y){
         while (x != y){
               
               if ( x > y )   x = x - y;
               else   y = y - x; 
               }
         return (x);
      }              

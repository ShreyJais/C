//C program to swap variable values of two variables
// Using a temporary variable
#include<stdio.h>
int main() {
      double first, second, temp;
      printf("Enter first number: ");
      scanf("%lf", &first);
      printf("Enter second number: ");
      scanf("%lf", &second);
      temp = first;
      first = second;
      second = temp;
      printf("\nAfter swapping, firstNumber = %.2f\n", first);
      printf("After swapping, secondNumber = %.2f", second);
      getch();
}

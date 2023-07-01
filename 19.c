//C program to find the factorial of a number (for).
#include <conio.h> 
main()
{
	int i, n, fact = 1;
	printf("\nEnter a number"); 
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	 	fact = fact * i;
	printf("Factorial of %d = %d\n", n, fact);
	getch(); 
}

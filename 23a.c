//C program to find the sum of the series (for)
//SIN(X)
#include <stdio.h>

int main()
{
	int i, j, n, fact, sign= -1;
	float x, p, sum=0;

	printf("Enter the value of x: \n");
	scanf("%f", &x);
	printf("Enter the number of the terms in a series: \n");
	scanf("%d", &n);
	
	for(i=1;i<=n;i+=2)
	{
  		p=1;
		fact=1;
		
		for(j=1;j<=i;j++)
    	{
    		p=p*x;
			fact=fact*j;
    	}
    	
    	sign=-1*sign;
    	sum+=sign*p/fact;
	}
	printf("Sum of sine series=%.2f", sum);
	getch();
	return 0;
}

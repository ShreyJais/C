#include<stdio.h>

int main()
{
	int i, j, n;
	
	printf("Enter the value of n: \n");
	scanf("%d", &n);
	
	for(i=n;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("%4d", i);
		}
		printf("\n");
	}
getch();
}

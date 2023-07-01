#include<stdio.h>

int main()
{
	int i, j, n, m;
	
	printf("Enter the value of n: \n");
	scanf("%d", &n);
	
	m=n;
	
	for(i=1;i<=n;i++)
	{
		for(j=i;j<n+i;j++)
		{
			printf("%d\t", j);
		}
		printf("\n");
		m++;
	}
getch();
}

//C program to convert centigrade into Fahrenheit. Formula: F= (1.8 * C) +32.
	#include<stdio.h>

	void main()
	{
		float celsius,fahrenheit;
		system("cls");
		printf("\n Enter Temp in Celsius:");
		scanf("%f",&celsius);
		fahrenheit = (1.8*celsius)+32;
		printf("\n Temp in Fahrenheit: %f",fahrenheit);
		getch();
	}

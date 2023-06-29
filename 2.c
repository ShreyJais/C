//C program to find the area and circumference of a circle.
#include<stdio.h>
void main()
{
	float PI=3.14,area,ci,rad;
	system("cls");
	printf("\n Enter radius of circle:");
	scanf("%f",&rad);
	area = PI*rad*rad;
	ci = 2*PI*rad;
	printf("\n Area of circle: %f",area);
	printf("\n Circumference: %f",ci);
	getch();
}

//Decimal to binary
#include <stdio.h> 
#include <math.h> 
main() {
	int num,dec,bin,r,k;
	printf("Enter a Decimal number: "); 
	scanf("%d", &dec);
	num = dec; 
    bin = 0;
	k = 1;
	do
	{
		r =num%2;
		num = num/2; 
        bin = bin + r * k; k = k * 10;
	} while (num!=0);
	printf("\n Decimal Number : %d", dec); 
    printf("\nBinary Number : %d", bin);
	getch(); 
}

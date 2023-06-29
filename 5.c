/*
C program to calculate 
the total salary of an employee 
    given Allowance1 is 33% of Basic Pay,
    Allowance2 is 73% of Basic Pay and 
    Deduction is 52% of Basic Pay.
*/    
#include <stdio.h>
int main()
{
	int b_pay;
	float a1,a2,gross_sal,deduction;
	printf("\n enter the basic pay: ");
	scanf("%d",&b_pay);
	a1=(b_pay/100)*33;
	a2=(b_pay/100)*73;
	deduction = (b_pay/100)*52;
	gross_sal=(b_pay+a1+a2)-deduction;
	printf("\n basic pay : %d",b_pay);
	printf("\n allowance 1 : %f",a1);
	printf("\n allowance 2 : %f",a2);
	printf("\n deduction : %f",deduction);
	printf("\n gross salary : %f",gross_sal);
	getch();
}

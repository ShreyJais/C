//To find the largest of three numbers (if).
#include<stdio.h> 
int main()
{
    int a, b, c,L ;
    printf("\nEnter value of a, b & c : "); scanf("%d%d%d", &a, &b, &c);
    if ((a > b) && (a > c)) L = a;
    if ((b > c) && (b > a)) L = b;
    if ((c > a) && (c > b)) L = c;
    printf("\n%d is the largest number", L);
    getch(); 
}

//To find the largest, smallest and second largest of three numbers.
#include<stdio.h>
int main()
{
    int a, b, c;
    int L,S,SL;
    printf("\nEnter value of a, b & c : "); 
    scanf("%d%d%d", &a, &b, &c);
    L =a;
    if(b > L)      L = b;
    if(c > L)      L = c;
    S =a; 
    if(b < S)     S = b;
    if(c < S)     S = c;
    SL = (a+b+c) - (L+S);
    printf("\n%d is the largest number", L); 
    printf("\n%d is the second largest number", SL);
    printf("\n%d is the smallest number", S); 
    getch(); 
}

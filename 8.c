//To check whether a given year is a leap year (if-else).
#include<stdio.h>
int main()
{
    int y,r ;
    printf("\nEnter any year : "); 
    scanf("%d",&y);
    r = y % 4; 
    if (r==0)
    printf("\n %d is a leap year ", y); 
    else
    printf("\n %d is not a leap year", y);
    getch(); 
}

//C program to find the sum of the series (for)
//COS(X)
#include <stdio.h>
#include <math.h>
 
int main()
{
    int n, y, i, j;
    float x, sign, cos, fact;
 
    printf("Enter the value of x: \n");
    scanf("%f",&x);
    printf("Enter the number of the terms in a series: \n");
    scanf("%d", &n);
    
    x=x*(3.142/180.0);
    cos=1;
    sign=-1;
    
    for(i=2;i<=n;i=i+2)
    {
        fact=1;
        
        for(j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        cos=cos+(pow(x, i)/fact)*sign;
        sign=sign*(-1);
    }
    
    printf("Sum of the cosine series = %.2f\n", cos);
    getch();
    return 0;
}

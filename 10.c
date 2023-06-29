//C program to find the second largest and second smallest of four numbers (else-if).
#include<stdio.h>

double main()
{
    double a, b, c, d;

    printf("Enter 4 numbers:\n");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d); 
    if(a>b && a>c && a>d){
           if(b>c && b>d){
                  printf("%lf is second largest number\n",b);
                  if(c>d)
                    printf("%lf is second smallest number",c);
                  else
                    printf("%lf is second smallest number",d);
           }
           else if(c>b && c>d){
                  printf("%lf is second largest number\n",c);
                  if(b>d)
                  printf("%lf is second smallest number",b);
                  else
                  printf("%lf is second smallest number",d);
           }
           else{
                  printf("%lf is second largest number\n",d);
                  if(b>c)
                  printf("%lf is second smallest number",b);
                  else
                  printf("%lf is second smallest number",c);
           }
    }
    else if(b>a && b>c && b>d){
         if(a>c && a>d){
                  printf("%lf is second largest number\n",a);
                  if(c>d)
                  printf("%lf is second smallest number",c);
                  else
                  printf("%lf is second smallest number",d);
           }
           else if(c>a && c>d){
                  printf("%lf is second largest number\n",c);
                  if(a>d)
                  printf("%lf is second smallest number",a);
                  else
                  printf("%lf is second smallest number",d);
           }
           else{
                  printf("%lf is second largest number\n",d);
                  if(a>c)
                  printf("%lf is second smallest number",a);
                  else
                  printf("%lf is second smallest number",c);
           }
         }
    else if(c>a && c>b && c>d){
           if(a>b && a>d){
                  printf("%lf is second largest number\n",a);
                  if(b>d)
                  printf("%lf is second smallest number",b);
                  else
                  printf("%lf is second smallest number",d);
           }
           else if(b>a && b>d){
                  printf("%lf is second largest number\n",b);
                  if(a>d)
                  printf("%lf is second smallest number",a);
                  else
                  printf("%lf is second smallest number",d);
           }
           else{
                  printf("%lf is second largest number\n",d);
                  if(a>b)
                  printf("%lf is second smallest number",a);
                  else
                  printf("%lf is second smallest number",b);
           }
         }
    else{
           if(a>b && a>c){
                  printf("%lf is second largest number\n",a);
                  if(b>c)
                  printf("%lf is second smallest number",b);
                  else
                  printf("%lf is second smallest number",c);
           }
           else if(b>a && b>c){
                  printf("%lf is second largest number\n",b);
                  if(a>c)
                  printf("%lf is second smallest number",a);
                  else
                  printf("%lf is second smallest number",c);
           }
           else{
                  printf("%lf is second largest number\n",c);
                  if(a>b)
                  printf("%lf is second smallest number",a);
                  else
                  printf("%lf is second smallest number",b);
           }
    }
getch();
}

//C program to output the digits of a number (while).
#include <stdio.h>

int main(){
    int num = 1024;
    printf("Enter a number: ");
    scanf("%d",&num);
    
    while(num != 0){
        int digit = num % 10;
        num = num / 10;
        printf("%d\n", digit);
    }
  getch();
    return 0;
}

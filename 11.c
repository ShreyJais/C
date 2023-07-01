//C program to output the next date for a given date(else-if).
#include <stdio.h>
#include <math.h>

int main()
{
    int year, month, day;
        printf("Enter the year: ");
        scanf("%d", &year);
        printf("\nEnter the month: ");
        scanf("%d", &month);
        printf("\nEnter the date: ");
        scanf("%d", &day);
        printf("\nSo, The given date is: %d/%d/%d", day, month, year);
      
      day++;  // tomorrow
    
      int days_per_month = 31;
      if(month == 4 || month == 6 || month == 9 || month == 11) {
        days_per_month = 30;
      } else if (month == 2) {
        days_per_month = 28;
        if (year % 4 == 0) {
          days_per_month = 29;
          if (year % 100 == 0) {
            days_per_month = 28;
            if (year % 400 == 0) {
              days_per_month = 29;
            }
          }
        }
      }
      if (day > days_per_month) {
        day = 1;
        month++;
        if (month > 12) {
          month = 1;
          year++;
        }
      }
      printf("\nSo, The next date of given date is: %d/%d/%d", day, month, year);
getch();
}

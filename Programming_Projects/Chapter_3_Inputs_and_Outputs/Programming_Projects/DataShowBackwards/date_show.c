#include <stdio.h> 

int main (void)
{
    int day, month, year;
    //day = 0;
    //month = 0;     what i  originally wrote and t's wrong
    //year = 0;
    //date_shown = 00000000;

    printf("Enter a date {mm/dd/yyyy}: ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("You entered the date %.3d%.2d%.1d\n", year, month, day);
    
    return 0;
}
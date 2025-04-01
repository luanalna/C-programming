#include <stdio.h>

int main(void)
{
    int firstday, firstmonth, firstyear, seconday, secondmonth, secondyear;

    printf("Enter the first date (xx/xx/xx): ");
    scanf("%d/%d/%d", &firstday, &firstmonth, &firstyear);

    printf("Enter the second date (xx/xx/xx): ");
    scanf("%d/%d/%d", &seconday, &secondmonth, &secondyear);

    if((firstday < 0 || firstday > 31) || (seconday < 0 || seconday > 31))
    {
        printf("Wrong day");
    }
    else if((firstmonth < 0 || firstmonth > 12) || (secondmonth < 0 || secondmonth > 12))
    {
        printf("Wrong month");
    }
    else
    {
        if (firstyear > secondyear)
        {
            printf("The earlier date is:%d/%d/%d ", seconday, secondmonth, secondyear);
        }
        else if (secondyear > firstyear)
        {
            printf("The earlier date is: %d/%d/%d ", firstday, firstmonth, firstyear);
        }
        else
        {
            if(firstmonth > secondmonth)
            {
                printf("The earlier date is:%d/%d/%d ", seconday, secondmonth, secondyear);
            }
            else if (secondmonth > firstmonth)
            {
                printf("The earlier date is: %d/%d/%d ", firstday, firstmonth, firstyear);   
            }
            else
            {
                if(firstday > seconday)
                {
                    printf("The earlier date is:%d/%d/%d ", seconday, secondmonth, secondyear);
                }
                else if (seconday > firstday)
                {
                    printf("The earlier date is: %d/%d/%d ", firstday, firstmonth, firstyear); 
                }
                else
                {
                    printf("Equal dates");
                }
            }
        }
    }

    return 0;
}
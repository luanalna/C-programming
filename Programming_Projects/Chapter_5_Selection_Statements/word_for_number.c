#include <stdio.h>
#include <stdbool.h>

bool checkIfInLimits(int number, int low, int uplim)
{
    if (number > low && number < uplim)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    int number;

    printf("Enter a two digit number: ");
    scanf("%d", &number);

    if (checkIfInLimits(number, 0, 69))
    {
        printf("FUNC ANSWER under 69");
    }
    else if (checkIfInLimits(number, 70, 99))
    {
        printf("FUNC ANSWER over 69");
    }
    else
    {
        printf("out of order");
    }
    

    /*switch (number)
    {
    case 1 : case 2 : .....scase 31 : printf("under 31"); 
        break;
    case 32 : printf("B");
        break;
    case 33 : printf("C");
        break; 
    default : printf("Wrong number ");
        break;
        */


}
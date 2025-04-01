#include <stdio.h>
#include <stdbool.h>

int main(void)
{
   /* int i = 0;
    bool checker = false;

    while (!checker)
    {
        i++;
        printf("i = %d\n", i);
        if (i == 10)
        {
            checker = true;
            printf("set checker true");
        }
    }*/

    int i, j, k;
    i = 5; j = 0; k = -5;
    printf("(i - 7) && (j++) < k"); // in this case i - 7 = 0 therefore && doesn t get executed further cause it's false;
    printf("%d\n", (i - 7) && (j++) < k); 
    printf("i, j, k");
    printf("%d %d %d\n", i, j, k);
    printf("(i - 6) && (j++) < k"); // in this case i - 6 = 1 therefore && next expression is being taken into consideration and below turns 9;
    printf("%d\n", (i - 6) && (j++) < k); 
    printf("i, j, k");
    printf("%d %d %d\n", i, j, k);
    printf("i && j || k"); // in this case i - 6 = 1 therefore && next expression is being taken into consideration and below turns 9;
    printf("%d\n", i && j || k); 
    printf("i, j, k");
    printf("%d %d %d\n", i, j, k);


    return 0;
}
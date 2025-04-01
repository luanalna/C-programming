#include <stdio.h>

int main(void)
{
    /*int i; //j, k;
    i = 1;
    printf("%d", i++ - 1);
    printf("%d", i);

The expression i++ - 1 is evaluated.

i++ is post-increment, meaning:

The value of i before incrementing is used in the expression.
After the expression is evaluated, i is incremented by 1.
i++ - 1 simplifies as follows:

i = 1; 1 - 1 = 0 (since i is used before incrementing)
i is now incremented to 2. */
   
    int i, j, k;
    i = 1; j = 2; k = 3;
    printf("%d\n",(++i) - (j++) + (--k)); // exec post increments
    printf("%d\n",++i - --j + k++); // exec post increments
    printf("%d %d %d", i, j, k);

    return 0;

}
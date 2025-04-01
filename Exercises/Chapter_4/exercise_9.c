#include <stdio.h>

int main(void)
{
    /*int i, j;
    i = 7; j = 8; 
    i *= j + 1;
    printf("%d %d", i, j);*/

/*The expression i *= j + 1; is evaluated as: j + 1 = 8 + 1 = 9
i *= 9 is equivalent to i = i * 9, i = 7 * 9 = 63
So now, i = 63 and j remains 8.*/

    /*int i,j,k;
    i = j = k = 1;
    i += j == k;
    printf("%d %d %d", i, j, k);*/

/*The comparison j == k is evaluated first because == has higher precedence than +=.
Since j = 1 and k = 1, the expression j == k results in 1 (true).*/

/*int i, j, k;
i = 1; j = 2; k = 3;
i -= j -= k;
printf("%d %d %d", i, j, k);*/

/*The -= operator is right-associative, meaning j -= k is evaluated first.
j -= k is equivalent to j = j - k, so:*/

    int i, j, k;
    i = 2; j = 1; k = 0;
    i *= j *= k;
    printf("%d %d %d", i, j, k);

    return 0;
}
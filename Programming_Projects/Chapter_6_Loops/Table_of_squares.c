#include <stdio.h>

int main(void)
{
    int i,n; 
    
    printf("This program prints a table of squares using a while statement\n: ");
    printf("Enter number of entries in table\n: ");
    scanf("%d", &n);

    i = 1;
    while( i <=n ) 
    {
        printf("%10d%10d\n", i, i * i);
        i++;
    }
    return 0;
}



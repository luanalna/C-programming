#include <stdio.h>

int main(void)
{

    int gs1_prefix, group_identifier, publisher_code, item_number, check_digit;

    printf("Enter ISBN (xxx-x-xxx-xxxxx-x):");
    scanf("%d-%d-%d-%d-%d", &gs1_prefix, &group_identifier, &publisher_code, &item_number, &check_digit);

    printf("GS1 prefix:%d\nGroupIdentifier:%d\nPublisher_code:%d\nItem Number:%d\nCheck Digit:%d\n", gs1_prefix, group_identifier, publisher_code, item_number, check_digit);

    return 0;
}
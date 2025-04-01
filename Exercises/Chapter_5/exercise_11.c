#include <stdio.h>

int main(void)
{
    int area_code;

    printf("Insert area code: ");
    scanf("%d", &area_code);

    switch (area_code){
        case 229:
            printf("Albany\n");
            break;
        case 404:
            printf("Atlanta"); 
            break;   
        case 470:
            printf("Macon\n");  
            break;
        case 706:
            printf("Columbus\n");  
            break;
        default: 
            printf("Area code not recognised\n");
            break;
    }

    /*if (area_code == 229)
        printf("Albany\n");
    else if (area_code == 404)
        printf("Atlanta\n");
    else if (area_code == 470)
        printf("Macon\n");
    else if ( area_code == 706)
        printf("Columbus\n");
    else  
        printf("Area code not recognised\n"); */

    return 0;
}
#include <stdio.h>

int main (void)
{
    // int height, lenght, width, volume, weight; 
    // Replace the separate assignments to length and width with initializers.
    int volume;
    int height = 8;
    int lenght = 12;
    int width = 10;
    volume = height * lenght * width;
    // weight = (volume + 165 ) / 166; 

    printf("Dimensions: %dx%dx%d\n", lenght, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    // printf("Dimensional weight (pounds): %d\n", weight);
    
    // Remove the weight variable from up and directly calculate its value in the printf.
    printf("Dimensioinal weight (pounds): %d\n", (volume +165) / 166);
    
    return 0;
}
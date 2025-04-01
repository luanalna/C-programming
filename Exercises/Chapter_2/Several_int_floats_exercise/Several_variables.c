#include <stdio.h>

int main (void)
{
    int mela, pela, arancia, totalfruits;
    float mela_grams, pela_grams, arancia_grams, total_grams;

    mela = 2;
    pela = 5;
    arancia = 10;
    //mela_grams = mela * 50.67f;
    //pela_grams = pela * 21.67f;
    //arancia_grams = arancia * 60.67f;

    totalfruits = mela + pela + arancia;
    total_grams = mela_grams + pela_grams + arancia_grams;

    printf("Mela grams in total: %f\n", mela_grams);
    printf("Pela grams in total: %f\n", pela_grams);
    printf("Arancia grams in total: %f\n", arancia_grams);
    printf("Fruits in total: %d\n", totalfruits);
    printf("Total grams of fruits: %f\n", total_grams);

}
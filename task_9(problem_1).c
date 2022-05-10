#include <stdio.h>
#define MAXVAL 50
#define COUNTER 11
int main()
{
    float value[MAXVAL];
    int i, low, high;
    int group[COUNTER] = { 0,0,0,0,0 };
    for (i = 0; i < MAXVAL; i++)
    {
        scanf_s("%f", &value[i]);
        ++group[(int)(value[i]) / 4];
    }
    printf("\n");
    printf(" GROUP RANGE FREQUENCY\n\n");
    for (i = 0; i < COUNTER; i++)
    {
        low = i * 4;
        if (i == 4)
            high = 16;
        else
            high = low + 3;
        printf(" %2d %3d to %3d %d\n", i + 1, low, high, group[i]);
    }
}
#include <stdio.h>
#define MAXGIRLS 5
#define MAXITEMS 5
main()
{

    int value[MAXGIRLS][MAXITEMS];
    int girl_total[MAXITEMS];
    int i, j, grand_total;
    printf("Input data\n");
    printf("Enter value, one at a time, row-wise\n\n");

    for (i = 0; i < MAXGIRLS; i++)
    {
        girl_total[i] = 0;
        for (j = 0; j < MAXITEMS; j++)
        {
            scanf_s("%d", &value[i][j]);
            girl_total[i] = girl_total[i] + value[i][j];
        }
    }
    int item_total[j];
    for (j = 0; j < MAXITEMS; j++)
    {

        for (i = 0; i < MAXGIRLS; i++)
            item_total[j] = item_total[j] + value[i][j];

    }
    grand_total = 0;
    for (i = 0; i < MAXGIRLS; i++)
        grand_total = grand_total + girl_total[i];
    printf("\n GIRLS TOTALS\n\n");
    for (i = 0; i < MAXGIRLS; i++)
        printf("Salesgirl[%d]=%d\n", i + 1, girl_total[i]);
    prntf("\n ITEM TOTAL\n\n");
    for (j = 0; j < MAXITEMS; j++)
        printf("Item[%d]= %d\n", j + 1, item_total[j]);
    printf("\nGrand Total = %d\n", grand_total);
}
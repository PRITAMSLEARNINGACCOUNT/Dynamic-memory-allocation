#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *array;
    array = (int *)malloc(6 * sizeof(int));
    array[0] = 1;
    array[1] = 10;
    array[2] = 100;
    array[3] = 100000;
    array[4] = 1324;
    array[5] = 1787;
    for (int i = 0; i < 6; i++)
    {
        printf("So the integers in the array you created in this programme is %d\n", array[i]);
    }

    return 0;
}
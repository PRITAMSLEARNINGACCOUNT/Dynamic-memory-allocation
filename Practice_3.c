#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *array;
    int a = 1;
    array = (int *)calloc(6, sizeof(int));
    for (int i = 0; i < 6; i++)
    {

        array[i] = a;
        a++;
    }
    for (int i = 0; i < 6; i++)
    {
        printf("So the siz integers are %d\n", array[i]);
    }

    return 0;
}
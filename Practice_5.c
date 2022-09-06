#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *array;
    array = (int *)malloc(10 * sizeof(int));
    printf("Before realocating the memory The multiplication table of 7 is\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d * %d= %d\n", 7, i + 1, 7 * (i + 1));
    }
    realloc(array, 5 * sizeof(int));
    printf("After realocatting the memory The multiplication table of 7 is\n");
    for (int i = 0; i < 15; i++)
    {
        printf("%d * %d= %d\n", 7, i + 1, 7 * (i + 1));
    }

    return 0;
}
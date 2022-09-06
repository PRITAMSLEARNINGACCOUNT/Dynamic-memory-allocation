#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a;
    a = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        a[i] = i + 2;
    }
    printf("Before reallocating the memory\n");
    for (int i = 0; i < 5; i++)
    {
        printf("So the integers are %d\n", a[i]);
    }
    printf("After reallocating the memory\n");
    realloc(a, 5 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        a[i] = i + 5;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("So the all of the integers after reallocating the memory is %d\n", a[i]);
    }

    return 0;
}
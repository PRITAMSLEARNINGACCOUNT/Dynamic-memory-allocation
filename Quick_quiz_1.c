#include <stdio.h>
#include <stdlib.h>
int main()
{

    float *array;
    array = (float *)malloc(5 * sizeof(float));
    for (int i = 0; i < 5; i++)
    {
        printf("Enter %dth integer\n", i + 1);
        scanf("%f", &array[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("So the integers given by the user in the array you created in this programme is %f\n", array[i]);
    }

    return 0;
}
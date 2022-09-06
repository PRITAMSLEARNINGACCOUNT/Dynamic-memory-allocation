#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *array;
    int num;
    printf("Enter how much integer varriable do you want to store\n");
    scanf("%d", &num);
    array = (int *)malloc(num * sizeof(int));
    for (int i = 0; i < num; i++)
    {
        printf("Enter %dth integer\n", i + 1);
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < num; i++)
    {
        printf("So the integers in the array you created in this programme is %d\n", array[i]);
    }
    return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *arr, capacity = 5;

    arr = (int *)calloc(capacity, sizeof(int));

    printf("Address %u\n", &arr);

    for (int i = 0; i < capacity; i++)
    {
        printf("Enter %d value :", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < capacity; i++)
    {
        printf("Value %d = %d\n", i + 1, arr[i]);
    }

    capacity++;

    arr = (int *)realloc(arr, capacity * sizeof(int));
    printf("\n///////////////////////////////////\n");
    for (int i = 0; i < capacity; i++)
    {
        printf("Enter %d value :", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < capacity; i++)
    {
        printf("Value %d = %d\n", i + 1, arr[i]);
    }

    free(arr);

    printf("\n///////////////////////////////////\n");
    printf("Address %u", &arr);
}
*/
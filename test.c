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

/*
#include<stdio.h>
void main(){
    int a,b,c=0;

    for(int i=1;i<=5;i++){
        a=1;
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            b=a;
            a=c+a;
        }
        c=b;
        printf("\n");
    }
}
*/

#include <stdio.h>
void main()
{
    for (int i = 1; i <= 5; i++)
    {

        for(int k = 4;k>=i;k--){
            printf("  ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf(" %d", j);
        }
        printf("\n");
    }
}
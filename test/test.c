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

/*
* * * * *
*       *
* * * * *
*       *
*       *


#include<stdio.h>
void main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i==1 || i==3 || j== 1 || j==5){
                printf("* ");
            } else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
*/

/*
A
B A
C B A
D C B A
E D C B A

#include<stdio.h>
void main(){
    char c='A';
    for(int i=0;i<=4;i++){
        for (int j=i;j>=0;j--){
            printf("%c ",c+j);
        }
        printf("\n");
    }
}
*/

/*
Write a Program to print the below pattern using nested for loop.
1 2 3 4 5 4 3 2 1
1 2 3 4   4 3 2 1
1 2 3       3 2 1
1 2           2 1
1               1
*/

// #include <stdio.h>
// void main()
// {
//     for (int i = 5; i >= 1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", j);
//         }

//         for (int k = 5; k > i; k--)
//         {
//             printf("_  _ ");
//         }

//         for (int m=i;m>=4; m--)
//         {
//             for (int l = 4; l >=1; l--)
//             {
//                 printf("%d ", l);
//             }
//         }

//         printf("\n");

//     }
// }

// #include <stdio.h>

// int main() {
//     int n = 5; // Number of rows

//     for (int i = 0; i < n; i++) {
//         // Print the left part of the pattern
//         for (int j = 1; j <= n - i; j++) {
//             printf("%d ", j);
//         }

//         // Print the spaces in the middle
//         for (int j = 0; j < 2 * i; j++) {
//             printf("  ");
//         }

//         // Print the right part of the pattern
//         for (int j = n - i; j >= 1; j--) {
//             printf("%d ", j);
//         }

//         printf("\n");
//     }

//     return 0;
// }

/*

 * * * 
*
 * * * 
      *
 * * *




#include<stdio.h>
void main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<4;j++){
            if(i==1 || i == 3|| i==5){
                printf(" *");
            } else if(i==2 && j==1){
                printf("*");
            } else if(i==4 && j==3){
                printf("    *");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

*/



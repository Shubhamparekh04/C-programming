/*
// Q1.Write a Program to print 1 to 10 using a while loop.
For example,
Output:
1 2 3 4 5 6 7 8 9 10

#include<stdio.h>
void main(){
    int i=1;

    while(i<=10){
        printf("%d ",i);
        i++;
    }
}
*/

/*
Q2.Write a Program to print 10 to 1 using a while loop.
For example,
Output:
10 9 8 7 6 5 4 3 2 1

#include<stdio.h>
void main(){
    int i=10;

    while(i>=1){
        printf("%d ",i);
        i--;
    }
}
*/

/*
Q3.Write a Program to print 1 to N using a while loop.
For example,
Input:
Enter any number: 7
Output:
1 2 3 4 5 6 7

#include<stdio.h>
void main(){
    int i=1,n;
    printf("Enter number :");
    scanf("%d",&n);

    while(i<=n){
        printf("%d ",i);
        i++;
    }
}
*/

/*
Q4.Write a Program to print odd numbers from N to 1 using a while loop.
For example,
Input:
Enter any number: 15
Output:
15 13 11 9 7 5 3 1

#include<stdio.h>
void main(){
    int n;
    printf("Enter number :");
    scanf("%d",&n);

    while(n>=1){
        if(n%2!=0){
        printf("%d ",n);
        }
        n--;
    }
}

*/

/*
Q5.Write a Program to print leap years between two given numbers using a while loop.
For example,
Input:
Enter the first number: 2020
Enter the second number: 2040
Output:
2020, 2024, 2028, 2032, 2034, 2040

#include<stdio.h>
void main(){
    int fy,sy;
    printf("Enter 1st Year : ");
    scanf("%d",&fy);
    printf("Enter 2nd Year : ");
    scanf("%d",&sy);

   while(fy<sy){
        if(fy%4==0){
        printf("%d ",fy);
        }
        fy++;
    }

}
*/

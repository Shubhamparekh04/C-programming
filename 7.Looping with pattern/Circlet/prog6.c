/*
Q.6 Develop a program that prints the given Custom numeric pattern using a nested for loop.
1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1
*/

#include<stdio.h>
void main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }

        for(int k=5;k>i;k--){
            printf("    ");
        }

        for(int l=i;l>=1;l--){
            printf("%d ",l);
        }
        printf("\n");
    }
}
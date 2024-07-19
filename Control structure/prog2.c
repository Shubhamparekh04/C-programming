/*
Write a Program to find the minimum number from the given 3 numbers using nested
if else. Also, draw a Flowchart in your book.


#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter 3 Numbers: \n");
    scanf("%d %d %d",&a,&b,&c);

    if(a<b){
        if(a<c){
            printf("first Number =  %d is Minimum",a);
        }else{
            printf("Third Number = %d is Minimum",c);
        }
    }else{
        if(b<c){
            printf("Second Number =  %d is Minimum",b);
        }else {
            printf("Third Number =  %d is Minimum",c);
        }
    }
    
}
 */

/*
Write a Program to find the maximum number from the given 4 numbers using nested
if else. Also, draw a Flowchart in your book.

#include<stdio.h>
void main(){

    int a,b,c,d;
    printf("Enter 4 Numbers: \n");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if(a>b){
        if(a>c){
            if(a>d){
                // a is maximum;
                printf("The maximum value is: %d",a);
            } else{
                // d is maximum;
                printf("The maximum value is: %d",d);
            }
        }else{
            if(c>d){
                // c is maximum;
                printf("The maximum value is: %d",c);
            }else{
                // d is maximum;
                printf("The maximum value is: %d",d);
            }
        }
    }else{
        if(b>c){
            if(b>d){
                //b is greater;
                printf("The maximum value is: %d",b);
            } else{
                //d is maximum;
                printf("The maximum value is: %d",d);
            }
        }else{
            if(c>d){
                //c is max;
                printf("The maximum value is: %d",c);
            }else{
                //d is max;
                printf("The maximum value is: %d",d);
            }
        }
    }
}
*/
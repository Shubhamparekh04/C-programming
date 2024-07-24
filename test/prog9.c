/*
// find the length of string

#include<stdio.h>
#include<string.h>
void main(){
    char str[]="Hello, World!";

    printf("Length is: %d",strlen(str));
}
*/

/*
// Find string length without library function strlen() of string.h library

#include<stdio.h>
void main(){
    char name[50];
    int ct=0;

    printf("Enter name : ");
    gets(name);

    while(name[ct]!='\0'){
        ct++;
    }

printf("Length is :%d ",ct);
   
}
*/

/*
//Reverse String

#include<stdio.h>
#include<string.h>
void main(){
    int i=0,j;
    char str[50],temp;
    printf("Enter string : ");
    gets(str);
    j=strlen(str)-1;

    while(i<j){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }

    printf("%s",str);

}
*/
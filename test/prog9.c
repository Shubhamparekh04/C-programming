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



/*
// user define function for string length

int stringlength(char[]);
#include<stdio.h>

int stringlength(char x[]){
    int i=0,ct=0;
    while(x[i]!='\0'){
        ct++;
        i++;
    }
    return ct;
}

void main(){
    int len;
    char name[20];
    printf("Enter Name : ");
    gets(name);
    len = stringlength(name);

    printf("Length is : %d",len);
}
*/


/*
//uppercase character string to lowercase
//<string.h> = strlwn();


#include<stdio.h>
#include<string.h>
void main(){
char name[20]="SHUBHAM";
printf("%s",strlwr(name));
}
*/

/*
//UPPERCASE to lowercase without strlwr() function

#include<stdio.h>
void main(){
    int i=0;
    char x[20]="A+nN*";

    while(x[i]!='\0'){
        if(x[i]>='A' && x[i]<='Z'){
          x[i] = x[i]+32;
        }
        i++;
    }

    printf("%s",x);

}
*/

/*
//Concat 2 strings

//1st Method
#include<stdio.h>
#include<string.h>
void main(){
    int i=0,len;
    char s1[20]="Hello", s2[20]="World";

    len = strlen(s1);

    while(s2[i]!='\0'){
        s1[len+i]=s2[i];
        i++;
    }
    printf("%s",s1);
}
*/

/*
//2nd Method
#include<stdio.h>
#include<string.h>
void main(){
    int l1,l2;
    char s1[20]="Hello", s2[20]="World";

    l1=strlen(s1);
    l2=strlen(s2);

    for(int i=0;i<=l2;i++){
        s1[l1+i]=s2[i];
    }

    printf("%s",s1);

}
*/

/*
// Structure

//Declare structure 
struct emp{
    int eno; // 4 bytes
    char ename[20]; // 20 bytes
    float esal; // 4 bytes
};

#include<stdio.h>
void main(){

//Declare variable (e) with structure data type
    struct emp e;

//printing size of structure occupied in memory
    printf("Size of : %d\n",sizeof(e)); // 28 bytes
    printf("Size of : %d",sizeof(struct emp)); // 28 bytes
}
*/

/*
//Assign value & acces value to structure elements

// global declaration
struct emp{
    int eno; // 4 bytes
    char ename[20]; // 20 bytes
    float esal; // 4 bytes
};

#include<stdio.h>
void main(){

    struct emp e = {1,"shubham",100000};
    e.esal = 200000;
    printf("Eno : %d\nEname : %s\nsalary : %.2f",e.eno,e.ename,e.esal);

}
*/


/*

// Array of structures
struct test{
    int eno;
    char ename[20];
    float esal;
};

#include<stdio.h>
void main(){

struct test e[3];

for(int i=0;i<3;i++){
    printf("\nEnter eno for %d employee: ",i);
    scanf("%d",&e[i].eno);

    printf("Enter ename for  %d employee: ",i);
    scanf("%s",&e[i].ename);

    printf("Enter Salary for  %s : ",e[i].ename);
    scanf("%f",&e[i].esal);
}


for(int j=0;j<3;j++){
    printf("\nid: %d\nName : %s\nSalary: %.2f\n",e[j].eno,e[j].ename,e[j].esal);
}

}
*/



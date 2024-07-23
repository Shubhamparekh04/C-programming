/*
#include<stdio.h>
void main(){
int rno;
float sub1,sub2,sub3,total,avg;
char name[20];

printf("Enter Roll no:");
scanf("%d",&rno);

printf("Enter Name:");
scanf("%s",&name);

printf("Enter marks of subject1,subject2,subject3: ");
scanf("%f %f %f",&sub1,&sub2,&sub3);

total = sub1+sub2+sub3;
avg = total/3;


if(sub1>=35 && sub2>=35 && sub3>=35){
    printf("\nRoll no: %d\n",rno);
    printf("Name: %s\n",name);
    printf("Sub1: %.2f\nSub2: %.2f\nSub3: %.2f\ntotal: %.2f\nAvg : %.2f\n",sub1,sub2,sub3,total,avg);
    printf("Pass, Grade: ");
    if(avg>=90){
        printf("A");
    }else if(avg>=80){
        printf("B");
    }else if(avg>=60){
        printf("C");
    }else{
        printf("D");
    }

}else{
    printf("Naapas");
}

}
*/




/*

#include<stdio.h>
void main(){
    float Bill,price,dis,ntotal;
    int qty;
    char pname[20];

    printf("Enter Product Name:");
    scanf("%s",&pname);

    printf("Enter Quantity:");
    scanf("%d",&qty);

    printf("Enter price per product:");
    scanf("%f",&price);

    ntotal=qty*price;

    if(ntotal>=1500){
        printf("Bill is %.2f , Discount is : 15%%",(ntotal*15)/100);
    }else if(ntotal>=1000){
        printf("Bill is %.2f , Discount is : 10%%",(ntotal*10)/100);
    }else if(ntotal>=800){
        printf("Bill is %.2f , Discount is : 8%%",(ntotal*8)/100);
    }else{
        printf("Bill is %.2f , Discount is : 0%%",ntotal);
    }
}
*/
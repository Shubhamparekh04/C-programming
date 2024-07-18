/*
Q.1 Temperature Converter
Develop a program that converts temperature from degrees Celsius to Fahrenheit using the
formula: °F = (9/5 × °C) + 32


#include<stdio.h>
void main(){
    float cel;
    printf("\nEnter temperature in Celsius: ");
    scanf("%f",&cel);

    printf("\nThe temperature in Fahrenheit: %.1f\n\n",(1.8*cel)+32);

}
*/

/*
Q.2 Gross Salary Calculator
Create a program that calculates the gross salary by adding percentages of HRA, DA, and TA to
the base salary as chosen by the user.

#include<stdio.h>
void main(){
float bsal,hra,da,ta,gsal;
printf("\nEnter Base Salary , HRA , DA & TA :\n\n");
scanf("%f %f %f %f",&bsal,&hra,&da,&ta);
gsal = bsal+((bsal*hra)/100.0)+((bsal*da)/100.0)+((bsal*ta)/100.0);
printf("\nGross Salary: Rs. %.f\n\n",gsal);
}
*/

/*
Q.3 Triangle Angle Finder
Write a program to find the third angle of a right triangle when two other angles are given.

#include<stdio.h>
void main(){
    int fa,sa;
    printf("\nEnter first & second angle :\n");
    scanf("%d %d",&fa,&sa);

    printf("\nThird angle: %d\n\n",180-(fa+sa));
}
*/
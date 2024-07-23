/*
Q1.//Write a Program to find the minimum number from the given 3 numbers using the ternary operator.

#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter 3 Numbers:");
    scanf("%d %d %d",&a,&b,&c);
    printf("Minimum is %d",a<b?a<c?a:c:b<c?b:c);

}
*/


/*
//Write a Program to create a menu-driven program for Telecom call service conversation using nested switch case.

#include<stdio.h>
void main(){
    int c,c2;
    printf("Press 1 for English\nPress 2 for Hindi\nPress 3 for Gujarati\nEnter your choice: ");
    scanf("%d",&c);

    switch (c)
    {
    case 1:
        printf("\nPress 1 for Internet Recharge\nPress 2 for Top-up Recharge\nPress 3 for Special Recharge\nEnter your choice: ");
        scanf("%d",&c2);

        switch (c2)
        {
        case 1:
        printf("\nYou have successfully done a Internet Recharge.");
        break;

        case 2:
        printf("\nYou have successfully done a Top-up Recharge.");
        break;

        case 3:
        printf("\nYou have successfully done a Special Recharge.");
        break;
        
        default:
        printf("\nInvalid Choice😡");
         break;
        }

    break;

    case 2:
     printf("\nInternet Recharge ke liye 1 dabaiye\nTop-up Recharge ke liye 2 dabaiye\nSpecial Recharge ke liye 3 dabaiye\nEnter your choice: ");
     scanf("%d",&c2);

        switch (c2)
        {
        case 1:
        printf("\nAapne safaltapurvak Internet Recharge kar liya he.");
        break;

        case 2:
        printf("\nAapne safaltapurvak Top-up Recharge kar liya he");
        break;

        case 3:
        printf("\nAapne safaltapurvak Special Recharge kar liya he");
        break;
        
        default:
        printf("\nInvalid Choice😡");
         break;
        }

    break;

    case 3:
     printf("\nInternet Recharge mate 1 dabavo\nTop-up Recharge mate 2 dabavo\nSpecial Recharge mate 3 dabavo\nEnter your choice: ");
     scanf("%d",&c2);

        switch (c2)
        {
        case 1:
        printf("\nTame safaltapurvak Internet Recharge karyu chhe.");
        break;

        case 2:
        printf("\nTame safaltapurvak Top-up Recharge karyu chhe.");
        break;

        case 3:
        printf("\nTame safaltapurvak Special Recharge karyu chhe.");
        break;
        
        default:
        printf("\nInvalid Choice😡");
         break;
        }

    break;
    
    
    default:
    printf("\nInvalid Choice😡");
        break;
    }

    printf("\n\n");
}
 */
//Question: Get a three digit number from user and subtract 5 from that number 
//if the one's and hundred's digits of the number are same, then print the result. 
//Do not use “if”.
//Example: Input: 595 Output 590. Input: 372 Output: 372
/*#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a three digit number: ");
    scanf("%d",&x);
    y=x-5;
    int ones,hundreds, number;
    number =x;
    ones = x%10;
    hundreds = x/100;
    while (ones == hundreds)
    {
        printf("Result = %d",y);
        break;
    }
    while(ones != hundreds)
    {
        printf("Result = %d",number);
        break;
    }

    return 0;
}*/
//using Function
#include<stdio.h>
int ones_eq_hund_or_not(int no);//Function Defination
int main()//Main Function 
{
    int x,y,result;
    printf("Enter a three digit number: ");
    scanf("%d",&x);
    y=x-5;
    result = ones_eq_hund_or_not(x);
    while(result == 1)
    {
        printf("Result = %d",y);
        break;
    }
    while(result == 0)
    {
        printf("Result = %d",x);
        break;
    }
    return 0;
}
int ones_eq_hund_or_not(int no)
{
    int ones,hundreds, Result;
    ones = no%10;
    hundreds = no/100;
    while (ones == hundreds)
    {
        Result = 1;
        break;
    }
    while(ones != hundreds)
    {
        Result = 0;
        break;
    }
    return Result;
}
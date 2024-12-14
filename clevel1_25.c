//Question: Get a four digit number from user and subtract 5 from that number 
//if the one's and hundred's digits of the number are same, then print the result. 
//Do not use “if”.
//Example: Input: 7959 Output 7959. Input: 3772 Output: 3767
/*#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a four digit number: ");
    scanf("%d",&x);
    y=x-5;
    int tens,hundreds, number;
    number =x;
    tens = ((x%100)/10);
    hundreds = ((x%1000)/100);
    while (tens == hundreds)
    {
        printf("Result = %d",y);
        break;
    }
    while(tens != hundreds)
    {
        printf("Result = %d",number);
        break;
    }

    return 0;
}*/
//Using Function
#include<stdio.h>
int tens_eq_hund_or_not(int n0);//Function Defination
int main()// Main function
{
    int x,y,result;
    printf("Enter a four digit number: ");
    scanf("%d",&x);
    y=x-5;
    result = tens_eq_hund_or_not(x);//calling Function 
    while (result == 1)
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
int tens_eq_hund_or_not(int n0)//Function Declaration
{
    int tens,hundreds, Result;
    tens = ((n0%100)/10);
    hundreds = ((n0%1000)/100);
    while (tens == hundreds)
    {
        Result = 1;
        break;
    }
    while(tens != hundreds)
    {
        Result  = 0;;
        break;
    }
    return Result;
}
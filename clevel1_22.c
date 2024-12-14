//Question: Get a number from user and subtract 5 from that number 
//if the ten's positon of the digit is odd, then print the result. 
//Do not use “if”.
//Example: Input: 685 Output 685. Input: 89172 Output: 89167
/*#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    y=x-5;
    int tens_digit = ((x/10)%10);
    while (tens_digit%2 ==0) // not an odd number
    {
    printf("Result = %d",x);
    break;
    }
    while (tens_digit%2 == 1) // an odd number
    {
    printf("Result = %d",y);
    break;
    }
    return 0;
}*/
//Using Function
#include<stdio.h>
int func(int x);//Function Declaration
int main()
{
    int x,y,result;
    printf("Enter a number: ");
    scanf("%d",&x);
    y=x-5;
    result = func(x);//Calling Function
    while(result == 1)
    {
        printf("%d",y);
        break;
    }
    while(result ==0)
    {
        printf("%d",x);
        break;
    }
    return 0;
}
int func(int x)//Function Declaration
{
    int result;
    int tens_digit = ((x/10)%10);
    while (tens_digit%2 ==0) // not an odd number
    {
        result = 0;
        break;
    }
    while (tens_digit%2 == 1) // an odd number
    {
        result = 1;
        break;
    }
    return result;
}

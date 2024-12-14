//Question: Get a number from user and subtract 5 from that number 
//if the number is odd, then print the result. 
//Do not use “if”.
//Example: Input: 695 Output 690. Input: 182 Output: 182
/*#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    y=x-5;
    while (x%2 ==0) // not an odd number
    {
    printf("Result = %d",x);
    break;
    }
    while (x%2 == 1) // an odd number
    {
    printf("Result = %d",y);
    break;
    }
    return 0;
}*/
//Using Function
#include<stdio.h>
int function(int x);//Function Defination
int main()//Main Function
{
    int x,y,result;
    printf("Enter a number: ");
    scanf("%d",&x);
    y=x-5;
    result = function(x);//Calling Function
    while(result == 1)
    {
        printf("%d",y);
        break;
    }
    while(result == 0)
    {
        printf("%d",x);
        break;
    }
    return 0;
}
int function(int x)//Function Declaration
{
    int  result;
    while (x%2 ==0) // not an odd number
    {
        result = 0;
        break;
    }
    while (x%2 == 1) // an odd number
    {
        result = 1;
        break;
    }
    return result;
}
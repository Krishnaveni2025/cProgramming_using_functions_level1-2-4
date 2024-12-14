// get a three digit number from the user .
//If the sum of the digit is 10 , then print "Success" , otherwise print "Failure".
//input : 956 - output: Failure . input: 127 - output: Success.
#include<stdio.h>
int isSum_10(int x);//Function Defination
int main()//Main Function
{
    int x,result;
    printf("Enter a three digit number: ");
    scanf("%d",&x);
    result = isSum_10(x);//Calling Function
    while (result == 1) 
    {
    printf("Success");
    break;
    }
    while (result == 0) 
    {
    printf("Failure");
    break;
    }
    return 0;
}
int isSum_10(int x)//Function Declaration
{
    int sum, Result;
    sum = 0;
    while(x != 0)
    {
        int digit = x%10;
        sum = sum + digit;
        x = x/10;
    }
    while(sum == 10)
    {
        Result = 1;
        break;
    }
    while(sum != 10)
    {
        Result = 0;
        break;
    }
    return Result;
}

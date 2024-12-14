//Question: Get a three digit number from user.
//if the sum  one's and hundred's digits of the number is lessthan 10, then print "Success". 
//Otherwise print "Failure".
//Example: Input: 569 Output: Failure. Input: 316 Output: Success.
/*#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a three digit number: ");
    scanf("%d",&x);
    int ones,hundreds;9
    ones = x%10;
    hundreds = x/100;
    y = ones+hundreds;
    while (y <10 )
    {
        printf("Success");
        break;
    }
    while(y >= 10)
    {
        printf("Failure");
        break;
    }

    return 0;
}*/
//Using Functions
#include<stdio.h>
int isSum_lt_10(int number);//Function Defination
int main() //Main Function
{
    int x,result;
    printf("Enter a three digit number: ");
    scanf("%d",&x);
    result = isSum_lt_10(x);//Calling Function
    while (result == 1 )
    {
        printf("Success");
        break;
    }
    while(result == 0)
    {
        printf("Failure");
        break;
    }

    return 0;
}
int isSum_lt_10(int number)//Function Declaration
{
    int sum,Result;
    int ones,hundreds;
    ones = number%10;
    hundreds = number/100;
    sum = ones+hundreds;
    while (sum <10 )
    {
        Result = 1;
        break;
    }
    while(sum >= 10)
    {
        Result = 0;
        break;
    }
    return Result;
}
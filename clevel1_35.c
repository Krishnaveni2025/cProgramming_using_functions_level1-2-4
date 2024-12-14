// Question: Get two 3-digit numbers from user. Add the one’s and hundred’s digits of both the
// numbers. Print the sum of all the digits of the number whose sum of one’s and
// hundred’s digits is bigger.
//Example: Input : 856 978 - Output: 24
//Input: 128 365 -Output: 11
/*#include <stdio.h>

int main()
{
    int x1, x2, y;
    printf("Enter First Number: ");
    scanf("%d", &x1);
    printf("Enter second Number: ");
    scanf("%d", &x2);
    int sum1, sum2;
    sum1 = (x1 / 100) + (x1 % 10);
    sum2 = (x2 / 100) + (x2 % 10);
    while (sum1 > sum2)
    {
        y = sum1 + ((x1 % 100) / 10);
        printf("Result = %d", y);
        break;
    }
    while (sum1 < sum2)
    {
        y = sum2 + ((x2 % 100) / 10);
        printf("Result = %d", y);
        break;
    }
}*/
//Using Fusnction
#include <stdio.h>
int sum_3d(int x1,int x2);//Function Declaration
int main()//Main Function
{
    int x1, x2, tsum;
    printf("Enter First Number: ");
    scanf("%d", &x1);
    printf("Enter second Number: ");
    scanf("%d", &x2);
    tsum = sum_3d(x1,x2);//Calling Function
    printf("sum = %d",tsum);
    return 0 ;
}
int sum_3d(int x1,int x2)//Function Defination
{
    int sum1, sum2,Result;
    sum1 = (x1 / 100) + (x1 % 10);//sum of one's and hundred's digits of x1
    sum2 = (x2 / 100) + (x2 % 10);//sum of one's and hundred's digits of x2
    while (sum1 > sum2)
    {
        Result = sum1 + ((x1 % 100) / 10);
        break;
    }
    while (sum1 < sum2)
    {
        Result = sum2 + ((x2 % 100) / 10);
        break;
    }
    return Result;
}
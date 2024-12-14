// Question: Get a three-digit number from user.
// If the sum of the digits is less than 10, then print
// the sum, otherwise add the digits of the sum. If the sum of the digits is less than 10,
// then print the sum, otherwise add the digits of the sum, and print the sum.
// Note: The result should be always single digit only.
// Example: Input: 123 – Output: 6
// Input: 149 - Output: 5 (149:1+4+9 = 14: 1+4 = 5)
// Input: 991 - Output: 1 (991: 9+9+1 = 19: 1+9 = 10: 1+0 = 1)
/*#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter a THREE digit number: ");
    scanf("%d", &x);
    y = (x / 100) + ((x % 100) / 10) + (x % 10);
    while (y < 10)
    {
        printf("sum = %d", y);
        break;
    }
    while (y >= 10)
    {
        y = (y / 10) + (y % 10);
        if (y >= 10)
            y = (y / 10) + (y % 10);
        printf("sum = %d", y);
        break;
    }
}*/
//Using Function
#include <stdio.h>
int TotalSum(int x);//Function Defination
int main()//Main Function
{
    int x, sum;
    printf("Enter a THREE digit number: ");
    scanf("%d", &x);
    sum = TotalSum(x);
    printf("Result = %d",sum);
    return 0;
}
int TotalSum(int x)//Function Declaration
{
    int sum;
    sum = (x / 100) + ((x % 100) / 10) + (x % 10);
    while (sum < 10)
    {
        printf("sum = %d", sum);
        break;
    }
    while (sum >= 10)
    {
        sum = ((sum / 10) + (sum % 10));
        if (sum >= 10)
            sum = ((sum / 10) + (sum % 10));
        break;
    }
    return sum;
}
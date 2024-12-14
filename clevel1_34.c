// Question: Get two 3-digit numbers from user.
// Print the difference between the one’s digit and
// hundred’s digit of the number
// whose ten’s digit is bigger than the other number’s ten’s digit
// Example: Input: 856 978 – Output: 1
// Input: 128 365 - Output: 2
/*
#include <stdio.h>
int main()
{
    int x1, x2, y;
    printf("Enter First Number : ");
    scanf("%d", &x1);
    printf("Enter Second Number : ");
    scanf("%d", &x2);
    // Your Code Here
    int y1, y2, ones, hundreds;
    y1 = (x1 % 100) / 10;
    y2 = (x2 % 100) / 10;
    while (y1 > y2)
    {
        ones = x1 % 10;
        hundreds = x1 / 100;
        if (ones > hundreds)
        {
            y = ones - hundreds;
        }
        else
        {
            y = hundreds - ones;
        }
        printf("Result = %d", y);
        break;
    }
    while (y1 < y2)
    {
        ones = x2 % 10;
        hundreds = x2 / 100;
        if (ones > hundreds)
        {
            y = ones - hundreds;
        }
        else
        {
            y = hundreds - ones;
        }
        printf("Result = %d", y);
        break;
    }
}*/
//Using Functions
#include <stdio.h>
int Sum(int x1,int x2);//Function Declaration
int main()//Main function
{
    int x1, x2, y;
    printf("Enter First Number : ");
    scanf("%d", &x1);
    printf("Enter Second Number : ");
    scanf("%d", &x2);
    y = Sum(x1,x2);//Calling Function
    printf("Result = %d", y);
    return 0;
}
int Sum(int x1, int x2)//Function Defination
{
    int y1, y2,y, ones, hundreds;
    y1 = (x1 % 100) / 10;
    y2 = (x2 % 100) / 10;
    while (y1 > y2)
    {
        ones = x1 % 10;
        hundreds = x1 / 100;
        if (ones > hundreds)
        {
            y = ones - hundreds;
        }
        else
        {
            y = hundreds - ones;
        }
        break;
    }
    while (y1 < y2)
    {
        ones = x2 % 10;
        hundreds = x2 / 100;
        if (ones > hundreds)
        {
            y = ones - hundreds;
        }
        else
        {
            y = hundreds - ones;
        }
        break;
    }
    return y;
}

//Question: Get  a Two digit number from user and subtract 5 from that number 
//if the sum of the digits of the number is odd, then print the result. 
//Do not use “if”.
//Example: Input: 95 Output 95. Input: 72 Output: 67
/*#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a two digit number: ");
    scanf("%d",&x);
    y=x-5;
    int sum =0, number;
    number =x;
    while(x != 0)
    {
        int digit = x%10;
        sum =sum + digit;
        x = x/10;
    }
    while (sum%2 ==0) // not an odd number
    {
    printf("Result = %d",number);
    break;
    }
    while (sum%2 == 1) // an odd number
    {
    printf("Result = %d",y);
    break;
    }
    return 0;
}*/
#include<stdio.h>
int sum_odd(int n1);//FUnction DEFINATION
int main()//main Function
{
    int x,y,result;
    printf("Enter a two digit number: ");
    scanf("%d",&x);
    y=x-5;
    result = sum_odd(x);//calling Function
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
int sum_odd(int n1)
{
    int sum =0, result;
    while(n1 != 0)
    {
        int digit = n1%10;
        sum =sum + digit;
        n1 = n1/10;
    }
    while (sum%2 ==0) // not an odd number
    {
        result = 0; 
        break;
    }
    while (sum%2 == 1) // an odd number
    {
        result = 1;
        break;
    }
    return result;
}
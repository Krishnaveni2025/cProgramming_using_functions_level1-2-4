// get a two digit number from the user .
//If the sum of the digit is 10 , then print "Success" , otherwise print "Failure".
//input : 56 - output: Failure . input: 37 - output: Success.
/*#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a two digit number: ");
    scanf("%d",&x);
     y=0 ;
    while(x != 0)
    {
        int digit = x%10;
        y = y + digit;
        x = x/10;
    }
    while (y == 10) 
    {
    printf("Success");
    break;
    }
    while (y != 10) 
    {
    printf("Failure");
    break;
    }
    return 0;
}*/
//Using Function
#include<stdio.h>
int sumis_10(int num);//Function Defination
int main()//Main function
{
    int x,result;
    printf("Enter a two digit number: ");
    scanf("%d",&x);
    result = sumis_10(x);//calling function
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
int sumis_10(int num)//function Declaration
{
    int sum, Result;
    sum=0 ;
    while(num != 0)
    {
        int digit = num%10;
        sum = sum + digit;
        num = num/10;
    }
    while (sum == 10) 
    {
        Result = 1;
        break;
    }
    while (sum != 10) 
    { 
        Result = 0;
        break;
    }
    return Result;
}
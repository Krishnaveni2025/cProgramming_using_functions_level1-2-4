//Question: Get a four digit number from user.
//if the sum  ten's and hundred's digits of the number is greaterthan 10, then print "Success". 
//Otherwise print "Failure".
//Example: Input: 7529 Output: Failure. Input: 9386 Output: Success.
/*#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a Four digit number: ");
    scanf("%d",&x);
    int tens,hundreds;
    tens = ((x%100)/10);
    hundreds = ((x%1000)/100);
    y = tens+hundreds;
    while (y >10 )
    {
        printf("Success");
        break;
    }
    while(y <= 10)
    {
        printf("Failure");
        break;
    }

    return 0;
}*/
//Using Functions
#include<stdio.h>
int isSum_gt_10(int number);//Function Defination
int main() //Main Function
{
    int x,result;
    printf("Enter a Four digit number: ");
    scanf("%d",&x);
    result = isSum_gt_10(x);//Calling Function
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
int isSum_gt_10(int number)//Function Declaration
{
    int sum,Result;
    int tens,hundreds;
    tens = ((number%100)/10);
    hundreds = ((number%1000)/100);
    sum = tens+hundreds;
    while (sum >10 )
    {
        Result = 1;
        break;
    }
    while(sum <= 10)
    {
        Result = 0;
        break;
    }
    return Result;
}
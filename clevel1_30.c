//Question: Get a four digit number from user .
//if the sum of ten's and hundred's digits of the number is equal to 10 , and one of the digit is more than 7 . 
//then print "success" , otherwise print "Failure".
//Example: Input: 4649 Output:Failure. Input: 9286 Output: Success.
/*#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a four digit number: ");
    scanf("%d",&x);
    int tens,hundreds;
    tens = ((x%100)/10);
    hundreds = ((x%1000)/100);
    y = tens+hundreds;
    if(y == 10){
        if(tens>7 || hundreds>7){
            printf("Success");
        }
        else{
            printf("Failure");
        }
    }

    return 0;
}*/
//Using Function
#include<stdio.h>
int funcname(int number);//Function Definaton
int main()//Main Function
{
    int x,result;
    printf("Enter a four digit number: ");
    scanf("%d",&x);
    result = funcname(x);//Calling function
    if(result == 1)
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
    return 0 ;
}
int funcname(int number)//Function Declaration
{
    int tens,hundreds,sum,Result;
    tens = ((number%100)/10);
    hundreds = ((number%1000)/100);
    sum = tens+hundreds;
    if(sum == 10)
    {
        if(tens>7 || hundreds>7)
        {
            Result = 1;
        }
        else
        {
            Result = 0;
        }
    }
    return Result;
}
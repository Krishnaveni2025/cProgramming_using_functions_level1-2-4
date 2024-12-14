//Get a Three -digit Number from the user and print the hundred's digit.
// Input : 456 Output : 4. Input : 569 Output : 5
/*#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter a Three-Digit Number: ");
    scanf("%d",&x);
    //your Code Here
    y = x/100;
    printf("Result = %d",y);
}*/
//Using Fuunctions
#include<stdio.h>
int hund_digit(int x);//Function Declaration
int main()//Main Function
{
    int x, y;
    printf("Enter a Three-Digit Number: ");
    scanf("%d",&x);
    y = hund_digit(x);//Calling Function
    printf("Result = %d",y);
    return 0 ;
}
int hund_digit(int x)//Function Defination
{
    int y;
    y = x/100;
    return y;
}
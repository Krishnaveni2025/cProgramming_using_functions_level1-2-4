//Get a Three -digit Number from the user and print the ten's digit.
// Input : 456 Output : 5. Input : 569 Output : 6
/*#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter Number: ");
    scanf("%d",&x);
    //your Code Here
    y = ((x%100)/10);
    printf("Result = %d",y);
}*/
//Using Functons
#include<stdio.h>
int tens_digit(int x);//Function Declaration
int main()//Main Function
{
    int x, y;
    printf("Enter Number: ");
    scanf("%d",&x);
    y = tens_digit(x);//Calling function
    printf("Result = %d",y);
    return 0;
}
int tens_digit(int x)//Function Defination
{
    int y ;
    y = ((x%100)/10);
    return y;
}
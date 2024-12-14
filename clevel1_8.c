//Get a Three -digit Number from the user and print the ones's digit.
// Input : 456 Output : 6. Input : 569 Output : 9
/*#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter a Three-Digit Number: ");
    scanf("%d",&x);
    //your Code Here
    y = x%10;
    printf("Result = %d",y);
}*/
//Using Function
#include<stdio.h>
int ones_digit(int x);//Function Declaration
int main()
{
    int x, y;
    printf("Enter a Three- Digit Number: ");
    scanf("%d",&x);
    //your Code Here
    y = ones_digit(x);//Calling Function
    printf("Result = %d",y);
    return 0;
}
int ones_digit(int x) // Function Defination
{
    int y ;
    y = x%10;
    return y;
}


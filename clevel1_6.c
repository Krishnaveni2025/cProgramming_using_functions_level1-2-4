//Get a Two -digit Number from the user and print the ones's digit.
// Input : 45 Output : 5. Input : 56 Output : 6.
/*#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter Number: ");
    scanf("%d",&x);
    //your Code Here
    y = x%10;
    printf("Result = %d",y);
}*/
//Using Functions
#include<stdio.h>
int ones_digit(int x);//Function Declaration
int main()
{
    int x, y;
    printf("Enter Number: ");
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

//Get a number from the user and divide the number by 8 and Print the remainder.
// Input : 45 Output : 5. Input : 143 Output : 27
/*#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter Number: ");
    scanf("%d",&x);
    //your code here
    y = x%8;
    printf("%d",y);
}*/
//USING FUNCTION
#include<stdio.h>
int divby8_rem(int x);//Function Declaration
int main()
{
    int x, y;
    printf("Enter Number: ");
    scanf("%d",&x);
    y = divby8_rem(x);//calling Function
    printf("%d",y);
    return 0;
}
int divby8_rem(int x)//Function Defination
{
    int y;
    y = x%8;
    return y;
}
// Get a number from the user and add 2 to that number and Print the Result .
//  Input : 45 Output : 47. Input : 56789 Output : 56791
/*#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter Number");
    scanf("%d",&x);
    //your code here
    y = x+2;
    printf("%d",y);
}*/
// Using Functions
#include <stdio.h>
int add2(int x); // Function Declaration
int main()//MAIN FUNCTON
{
    int x, y;
    printf("Enter Number: ");
    scanf("%d", &x);
    y = add2(x); // calling Function
    printf("%d", y);
    return 0;
}
int add2(int x) // Function Defination
{
    int y;
    y = x + 2;
    return y;
}
// Get a Three -digit Number from the user and print the sum digits.
//  Input : 562 Output : 13. Input : 469 Output : 19
/*#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter a Three-Digit Number: ");
    scanf("%d", &x);
    // your Code Here
    y = (x % 10) + ((x%100) / 10) + (x/100); // sum
    printf("Result = %d", y);
}*/
//Using Function
#include <stdio.h>
int sum_3digit(int x);//Function Declaration
int main()//Main Function
{
    int x, y;
    printf("Enter a Three-Digit Number: ");
    scanf("%d", &x);
    y = sum_3digit(x); // Function Calling
    printf("Result = %d", y);
}
int sum_3digit(int x)//Function Defination
{
    int y;
    y = (x % 10) + ((x%100) / 10) + (x/100);
    return y;
}
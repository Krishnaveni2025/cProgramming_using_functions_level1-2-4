// Get a Two -digit Number from the user and print the sum digits.
//  Input : 56 Output : 11. Input : 69 Output : 15
/*#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter Number: ");
    scanf("%d", &x);
    // your Code Here
    y = (x % 10) + (x / 10); // sum
    printf("Result = %d", y);
}*/
//Using Function
#include <stdio.h>
int sum_2digit(int x);//function Declaration
int main()//Main function
{
    int x, y;
    printf("Enter a Two-Digit Number: ");
    scanf("%d", &x);
    // your Code Here
    y = sum_2digit(x); // Calling Function
    printf("Result = %d", y);
}
int sum_2digit(int x)//Function Defination
{
    int y;
    y = (x % 10) + (x / 10);
    return y;
}
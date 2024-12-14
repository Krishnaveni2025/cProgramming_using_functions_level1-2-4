// Get a Two -digit Number from the user and print the reverse of it.
//  Input : 56 Output : 65. Input : 59 Output : 95
/*#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter a Two-digit Number: ");
    scanf("%d", &x);
    // your Code Here
    y = ((x % 10)*10) + (x / 10); 
    printf("Result = %d", y);
}*/
//Using Function
#include <stdio.h>
int reverse_2digit(int x);//Function Declaration
int main()//Main Function 
{
    int x, y;
    printf("Enter a Two-Digit Number: ");
    scanf("%d", &x);
    y = reverse_2digit(x);//Calling Function 
    printf("Result = %d", y);
    return 0;
}
int reverse_2digit(int x)//Function Defination
{
    int y;
    y = ((x % 10)*10) + (x / 10); 
    return y;
}
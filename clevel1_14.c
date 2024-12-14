// Get a Three -digit Number from the user and print the reverse of that number.
//  Input : 561 Output : 165. Input : 859 Output : 958
/*#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter a Three -digit Number: ");
    scanf("%d", &x);
    // your Code Here
    y = 0;
    while(x!=0){
        int digit  = x % 10;
        y = (y*10)+digit;
        // Reverse of the number 165
        x = x/10;
    }
    printf("Result = %d", y);
}*/
//Using Function
#include <stdio.h>
int reverse_3digit(int x);//Function Declaration
int main()//Main Functon
{
    int x, y;
    printf("Enter a Three -digit Number: ");
    scanf("%d", &x);
    y = reverse_3digit(x);//alling Function
    printf("Result = %d", y);
    return 0;
}
int reverse_3digit(int x)//Function Defination
{
    int y = 0;
    // Reverse of the number 165
    while(x!=0){//t t t f
        int digit  = x % 10;//5 6 1
        y = (y*10)+digit;//5  56  561
        x = x/10;//16 1 0
    }
    return y;
}
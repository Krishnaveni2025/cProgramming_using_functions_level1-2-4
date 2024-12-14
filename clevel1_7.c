//Get a Two -digit Number from the user and print the ten's digit.
// Input : 45 Output : 4. Input : 56 Output : 5
/*#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter Number: ");
    scanf("%d",&x);
    //your Code Here
    y = x/10;
    printf("Result = %d",y);
}*/
//Using Functions
#include<stdio.h>
int tens_digit(int x);//Function Declaration
int main()//Main Function
{
    int x, y;
    printf("Enter Two-Digit Number: ");
    scanf("%d",&x);
    y = tens_digit(x);//Calling Functions
    printf("Result = %d",y);
    return 0;
}
int tens_digit(int x)//Called Function defination
{
    int y ;
    y = x/10;
    return y;
}


//Get a four -digit Number from the user and only reverse the last two digits of the number, then print the number.
// Input : 9561 Output : 5961. Input : 3859 Output : 8359
/*#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter a Four-Digit Number: ");
    scanf("%d",&x);
    //your Code Here
    int digit;
    digit = (((x/10)%10)*10)+(x%10) ;
    y = (((((x%1000)/100)*10)+(x/1000))*100)+digit ;
    printf("Result = %d",y);
}*/
//Using Function
#include<stdio.h>
int reverse_last2digits(int x);//Function Defination
int main()//Main Function
{
    int x, y;
    printf("Enter a four -digit Number: ");
    scanf("%d",&x);
    y = reverse_last2digits(x);//Calling Functon
    printf("Result = %d",y);
    return 0;
}
int reverse_last2digits(int x)//Function Declaration
{
    int y;
    int digit;
    digit = (((x/10)%10)*10)+(x%10) ;
    y = (((((x%1000)/100)*10)+(x/1000))*100)+digit ;
    return y;
}
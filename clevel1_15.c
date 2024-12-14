//Get a four -digit Number from the user and only reverse the first two digits of the number, then print the number.
// Input : 9561 Output : 9516. Input : 3859 Output : 3895
/*#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter a four -digit Number: ");
    scanf("%d",&x);
    //your Code Here
    int digit;
    digit = ((x%10)*10)+((x/10)%10) ;
    y = ((((x/1000)*10)+((x%1000)/100))*100)+digit ;
    printf("Result = %d",y);
}*/
//Using Function
#include<stdio.h>
int reverse_1st2digits(int x);//Function Declaration
int main()//Main Function
{
    int x, y;
    printf("Enter a four -digit Number: ");
    scanf("%d",&x);
    y = reverse_1st2digits(x);//Calling Functon
    printf("Result = %d",y);
    return 0;
}
int reverse_1st2digits(int x)//Function Defination
{
    int y;
    int digit;
    digit = ((x%10)*10)+((x/10)%10) ;
    y = ((((x/1000)*10)+((x%1000)/100))*100)+digit ;
    return y;
}
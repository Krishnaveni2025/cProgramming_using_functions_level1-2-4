//Get a number from the user and subtract to that number and Print the Result .
// Input : 45 Output : 40. Input : 56789 Output : 56784
/*#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter Number: ");
    scanf("%d",&x);
    //your code here
    y = x-5;
    printf("%d",y);
}*/
//Using Function
#include<stdio.h>
int sub5(int x);//Function Declaration
int main()//Main Function
{
    int x, y;
    printf("Enter Number: ");
    scanf("%d",&x);
    y = sub5(x);//Function Calling
    printf("%d",y);
    return 0;
}
int sub5(int x)//called function Defination 
{
    int y ;
    y = x-5;
    return y;
}
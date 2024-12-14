//Get a  Two digit number from the user and make the one's digit as 0 .
// Input : 95 Output : 90. Input : 18 Output : 10
/*#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter Two-digit Number: ");
    scanf("%d",&x);
    //your code here
    y = ((x/10)*10);
    printf("%d",y);
}*/
//using Function
#include<stdio.h>
int make_1d0(int x);//Function Defination
int main()//Main Function
{
    int x, y;
    printf("Enter Two-digit Number: ");
    scanf("%d",&x);
    y = make_1d0(x);//Calling Function
    printf("%d",y);
}
int make_1d0(int x)//Function Declaration
{
    int y ;
    y = ((x/10)*10);
    return y;
}
//Get a  Two digit number from the user and make the tens's digit as 1 .
// Input : 95 Output : 15. Input : 82 Output : 12
/*#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter Two-digit Number: ");
    scanf("%d",&x);
    //your code here
    y = (10+(x%10));
    printf("%d",y);
}*/
//Using Function
#include<stdio.h>
int make_tend1(int x);//Function Defination
int main()//Main Function
{
    int x, y;
    printf("Enter Two-digit Number: ");
    scanf("%d",&x);
    y = make_tend1(x);// Calling Function 
    printf("%d",y);
    return 0 ;
}
int make_tend1(int x)//Function Declaration
{
    int y;
    y = (10+(x%10));
    return y;
}
//Get a  Three digit number from the user and make the one's digit as 2 .
// Input : 695 Output : 692. Input : 182 Output : 182
/*#include<stdio.h>
int main()
{

    int x, y;
    printf("Enter Three-digit Number: ");
    scanf("%d",&x);
    //your code here
    y = ((x/10)*10)+2;
    printf("%d",y);
}*/
//Using Function
#include<stdio.h>
int make_1digit2(int x);//Function Defination
int main()//Main Function
{

    int x, y;
    printf("Enter Three-digit Number: ");
    scanf("%d",&x);
    y = make_1digit2(x);//Calling Function
    printf("%d",y);
    return 0;
}
int make_1digit2(int x)//Function Declaration
{
    int y;
    y = (((x/10)*10)+2);
    return y;
}
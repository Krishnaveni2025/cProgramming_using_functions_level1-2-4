//Get a number from the user and multiply 3 to that number and Print the Result .
// Input : 45 Output : 135. Input : 1200 Output : 3600
/*#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter Number: ");
    scanf("%d",&x);
    //your code here
    y = x*3;
    printf("%d",y);
}*/
// Using function
#include<stdio.h>
int mul3(int x);//Function Declaration
int main()//Main Function
{
    int x, y;
    printf("Enter Number: ");
    scanf("%d",&x);
    y = mul3(x);//Calling Function
    printf("%d",y);
    return 0;
}
int mul3(x) //Called Function DEFINAION
{
    int y;
    y = x*3;
    return y;
}


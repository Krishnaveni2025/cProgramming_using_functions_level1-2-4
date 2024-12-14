//Get a number from the user and divide the number by 6 and Print the quotient .
// Input : 45 Output : 7. Input : 143 Output : 23
/*#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter Number: ");
    scanf("%d",&x);
    //your code here
    y = x/6;
    printf("%d",y);
}*/
#include<stdio.h>
int div6(int x);//Function DEclaraTION
int main()//Main Functon
{
    int x, y;
    printf("Enter Number: ");
    scanf("%d",&x);
    y = div6(x);//Calling Function
    printf("%d",y);
}
int div6(int x)//Called Function DEfinAION
{
    int y ;
    y = x/6;
    return y;
}
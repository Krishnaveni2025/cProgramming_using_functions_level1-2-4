//Get a  Three digit number from the user and make the ten's digit as 0 .
// Input : 695 Output : 605. Input : 182 Output : 102
/*#include<stdio.h>
int main()
{

    int x, y;
    printf("Enter Three-digit Number: ");
    scanf("%d",&x);
    //your code here
    y = ((x/100)*100)+(x%10);
    printf("%d",y);
}
*/
//Using Function
#include<stdio.h>
int make_tend0(int x);//Function Defination
int main()//Main Function
{

    int x, y;
    printf("Enter Three-digit Number: ");
    scanf("%d",&x);
    y = make_tend0(x);//calling function
    printf("%d",y);
    return 0;
}
int make_tend0(int x)//Function declaration
{
    int y;
    y = ((x/100)*100)+(x%10);
    return y;
}

#include<stdio.h>
int main()
{

    int limit,b;
    scanf("%d",&limit);
    b=limit/2;
    int flag=0;
    for(int i=2;i<=b;i++)
    {
        int temp;
        temp=limit%i;
        if(temp==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("The number is prime");
    }
    else
    {
        printf("The number is not prime");
    }
    return 0;
}

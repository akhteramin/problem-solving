#include<stdio.h>
int main()
{
    int sum=0;
    int limit;
    scanf("%d",&limit);
    int flag=0;
    for(int i=2;i<limit;i++)
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

        printf("this number is prime.");
    }
    else
        printf("this number is not prime");

        return  0;
}

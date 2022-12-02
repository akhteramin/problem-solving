#include<stdio.h>
int main()
{
    int sum=0;
    int limit;
    scanf("%d",&limit);
    for(int i=1;i<=limit;i++)
    {
        int temp,temp1;
        temp=i%3;
        temp1=i%5;
        if(temp==0 && temp1==0)
        {
            sum=sum+i;

        }



    }
    printf("The sum is:%d",sum);
    return 0;
}

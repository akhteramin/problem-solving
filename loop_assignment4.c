#include<stdio.h>
int main()
{
    int input=0,sum=0,totalSum=1;
    scanf("%d",&input);
    int count=0;
    while(count<input-1)
    {
        count++;
        sum+=count;
        totalSum=totalSum+sum+1;
        printf("sum=%d\n",sum+1);
        printf("total sum::%d\n",totalSum);
    }
}

#include<stdio.h>
int main()
{
    int i,n,a[50],pos;
    printf("Enter any number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the searching number:");
    scanf("%d",&pos);
    int count=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==pos)
        {
         count++;

        }
    }
    printf("The result is:%d",count);
}

#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>0)
    {
        printf("the number is positive:%d",a);
    }

else if(a<0)
{
    printf("the number is negative:%d",a);
}
else if(a==0)
{
    printf("the number is zero:%d",a);
}
return 0;
}

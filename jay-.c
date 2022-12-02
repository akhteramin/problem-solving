#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d",&a);
    b=a%2;

    if(b==1)
    {
        printf("the number is odd:%d",b );

    }
     else if(b==0)
    {
        printf("the number is even:%d",b);
    }
    return 0;
}

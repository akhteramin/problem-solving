#include<stdio.h>
int main()
{
    int a,b,c,sum,average,product;
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    printf("the sum is:%d",sum);
    average=(a+b+c)/3;
    printf("\nthe average is:%d",average);
    product=a*b*c;
    printf("\nthe product is:%d",product);

    if(b>=a && b>=c)
    {
        printf("\nBiggest is:%d",b);
    }
    else if(a>=b && a>=c)
    {
        printf("\nBiggest is:%d",a);

    }
    else if(c>=a && c>=b)
    {
        printf("\nBiggest is:%d",c);

    }
    else
    {
        printf("\nit can't be determined.");
    }

    if(b<a && b<c)
    {
        printf("\nsmallest is %d",b);
    }
    else if(a<b && a<c)
    {
        printf("\nsmallest  is:%d",a);
        }
    else if(c<a && c<b){

        printf("\nsmallest is:%d",c);

    }
    else
    {
        printf("\nit can not be determined");
    }


    return 0;
}

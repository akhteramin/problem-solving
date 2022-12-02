#include<stdio.h>
int main(){

    int input,input2;
    printf("What operation you want to do? 1/2 for subtract, 3/4 FOR divide");
    scanf("%d",&input);
    scanf("%d",&input2);
    if(input==1 && input2==2)
    {
        int a;
        int b;
        scanf("%d %d",&a,&b);
        int c=a-b;
        printf("%d",c);

    }
if (input==3 && input2==4)
{
        float a;
    float b;
    scanf("%f %f",&a,&b);
    float c=a/b;
    printf("%f",c);

}

    /*scanf("%d",&a);
    prinint a:tf("\n you have enterefd %d",a);

    scanf("\n %c",&b);
     printf("\n you have enterefd %c",b);

    scanf("%f",&c);
    printf("\n you have enterefd %f",c);*/
    //scanf("%d %c %f",&a,&b,&c);
    /*if(input==1 && input2==2)
    {
        int  a;
    int b;
        scanf("%d %d",&a,&b);
        int c=a+b;
        printf("%d",c);
    }
    /*if(input==2)
    {
        int  a;
    int b;
        scanf("%d %d",&a,&b);
        int c=a-b;
        printf("%d",c);
    }*/
    /*else if(input==3 && input2==4)
    {
        int  a;
    int b;
        scanf("%d %d",&a,&b);
        int c=a*b;
        printf("%d",c);
    }
    else printf("You have entered invalid input.");*/



return 0;
}

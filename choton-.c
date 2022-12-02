#include<stdio.h>
#include<math.h>
int main()
{
    int a;




    scanf("%d",&a);
    if (a==1)
    {
        float radius,pie,r;
        scanf("%f",&r)
        pie=3.1416;
        radius=pie*pow(r,2);
        printf("Ener the result:%f",radius);
    }
    else if (a==2)
    {
        int b,c,area;
        scanf("%d %d",&b,&c);
        area=b*c;
        printf("The are is:%d",area);
    }
    else if (a==3)
    {
        int r,sqare;
        scanf("%d",&r);
         sqare=pow(r,2);
        printf("The result is:%d",sqare);
    }
    return 0;
}

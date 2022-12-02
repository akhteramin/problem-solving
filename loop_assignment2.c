#include<stdio.h>

int main()
{
    int input,sum=0;
    scanf("%d",&input);
    int count=0;
    while(count<input)
    {
        count++;
        sum+=(count*(count+1)*(count+2));
        printf("%d\n",sum);
    }
    printf("%d",sum);
}

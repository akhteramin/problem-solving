#include<stdio.h>
int main()
{
    int input,sum=0;
    scanf("%d",&input);
    int count=0;
    while(count/2<input){
        count=count+2;
        sum+=(count*(count-1));
        printf(">>%d %d",count,count-1);

    }
        printf("%d\n",sum);

}

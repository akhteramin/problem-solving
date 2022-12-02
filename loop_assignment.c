#include<stdio.h>

int main()
{
    float input,sum=0;
    scanf("%f",&input);
    float count=0;
    while(count<input){
        count++;
        sum+=(1/count);

    }
    printf("summation is:: %f",sum);
}

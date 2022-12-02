#include<stdio.h>

int main(){
    int input;
    scanf("%d",&input);
    int count=0;
    for(int i=0;;i++)
    {
        count++;
        int temp=input%10;
        input=input/10;
        //printf("\ntemp: %d \ninput:%d \ncount:%d",temp,input,count);
        if(count==1)
        {
            printf("\nlast number:%d",temp);
        }
        if(input==0)
        {
            printf("\nfirst number:%d",temp);
            break;
        }
    }
    //printf("count:%d",count);
}

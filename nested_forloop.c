#include<stdio.h>

int main()
{
    int input;
    scanf("%d",&input);
    for(int i=0;i<input;i++)
    {

        if(i<=input/2)
        {
            for(int j=0;j<i;j++)
            {
                    printf("*");
            }
        }
        else
        {
            for(int j=0;j<i;j++)
            {
                if(i+j<=input-1)
                    printf("*");
            }
        }

        //for(int j=0)


        printf("\n");
    }
}

#include<stdio.h>
void swap(int a[],int i,int j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
int main()
{
    int i,j,n,a[50],temp;
    printf("Enter any number:");
    scanf("%d",&n);
    for( i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                swap(a,i,j);
                //temp=a[i];
                //a[i]=a[j];
                //a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

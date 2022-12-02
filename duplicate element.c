#include<stdio.h>
void get_high(int arr1[],int arr2[], int n)
{
    int high=0;
    for(int i=0;i<n;i++)
    {
        if(high<arr2[i])
        {
            high=arr1[i];
        }
    }
    printf("%d",high);
}
void count(int arr1[],int arr2[],int n)
{
      for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr1[i]==arr1[j])
            {
                arr2[i]++;
            }
        }
    }
}
int main()
{
    int i,j,n,a[50],b[50]={0};
    printf("Enter any number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    count(a,b,n);

    get_high(a,b,n);

}

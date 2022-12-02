#include<stdio.h>
int main()
{
    int arr[5],sum=0;
 for(int i=0;i<sizeof(arr)/sizeof(int);i++)
 {
     scanf("%d",&arr[i]);

 }
 for(int i=0;i<sizeof(arr)/sizeof(int);i++)
 {
     int temp;
     temp=arr[i]%2;
     if(temp==0)
     {
         printf("\nThe number is even ");
     }
     else if(temp==1)
     {
         printf("\nThe number is odd");
     }

 }


    return 0;
}

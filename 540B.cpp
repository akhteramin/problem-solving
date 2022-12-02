#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int countv=0;
    int arr[n+1],sum[n+1]={0};
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        if(i>2){
            if(i%2==0)
                sum[i] = sum[i-2]+arr[i];
            else
                sum[i] = sum[i-2]+arr[i];
        }
        else
            sum[i]=arr[i];
    }
    if(n==1)
        countv=1;
    if(n>2){
        for(int i=1;i<=n;i++){
            int temp_v=0,temp_p=0;
            temp_v=sum[n];
            temp_p=sum[n-1];
            if((i==1 && n%2==1) || (i==2 && n%2==0)){
                sum[n]-=sum[i];
                if(i==2){
                    sum[n-1]-=sum[i-1];
                    sum[n]+=sum[i-1];
                }
            }
            if((i==1 && n%2==0) || (i==2 && n%2==1)){
                sum[n-1]-=sum[i];
                if(i==2){
                    sum[n-1]+=sum[i-1];
                    sum[n]-=sum[i-1];
                }
            }
            if(i>2 &&((i%2==1 && n%2==1) || (i%2==0 && n%2==0))){

                sum[n]=sum[n]-sum[i]+sum[i-1];
                sum[n-1]=sum[n-1]-sum[i-1]+sum[i-2];
            }
            if(i>2 &&((i%2==1 && n%2==0) || (i%2==0 && n%2==1))){
                sum[n-1]=sum[n-1]-sum[i]+sum[i-1];
                sum[n]=sum[n]-sum[i-1]+sum[i-2];
            }

                //cout<<sum[n-1]<<" "<<sum[n]<<endl;
                if(sum[n]==sum[n-1])
                    countv++;
                sum[n]=temp_v;
                sum[n-1]=temp_p;
        }
    }
    cout<<countv<<endl;

}


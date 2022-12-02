#include<bits/stdc++.h>
using namespace std;
int arr[100001],cnt_arr[100001]={0},sorted_ar[100001];
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,target_val;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(i+1==k)
                target_val=arr[i];
            cnt_arr[arr[i]]++;
        }
        for(int i=1;i<100001;i++){
            cnt_arr[i]+=cnt_arr[i-1];
        }
        for(int i=0;i<n;i++){
            sorted_ar[cnt_arr[arr[i]]]=arr[i];
            cnt_arr[arr[i]]--;
        }
        for(int i=1;i<=n;i++){
            cout<<sorted_ar[i]<<endl;
        }
    }
}

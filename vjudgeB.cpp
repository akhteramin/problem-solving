#include<bits/stdc++.h>
using namespace std;
int arr[100001];
int main(){
    int t;
    //cin>>t;
    scanf("%d",&t);
    while(t--){
        int n,k,pos_val=0,pos=0,cnt=0;
        scanf("%d %d",&n,&k);
        for(int i=0;i<n;i++){
            //cin>>arr[i];
            scanf("%d",&arr[i]);
            if(i==k-1){
                pos=i;
                pos_val=arr[i];
            }
            if(pos_val>arr[i])
                cnt++;
        }
        for(int i=0;i<pos;i++){
            if(arr[i]<pos_val)
                cnt++;
        }
        cout<<cnt+1<<endl;
    }
}

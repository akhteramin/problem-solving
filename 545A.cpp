#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,prev=0,curr=0,ans=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(n==2)
        {
            ans=1;
            continue;
        }
        if(i>0 && arr[i]!=arr[i-1])
        {
            if(i==n-1 && prev==0){
                prev=curr;
                curr=1;
            }
            if(ans<min(prev,curr))
                ans=min(prev,curr);
            prev=curr;
            curr=0;
        }
        if(i==n-1 && ans<min(prev,curr++))
        {

            ans=min(prev,curr);
        }
        else
            curr++;
    }
    cout<<2*ans<<endl;
}

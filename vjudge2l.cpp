#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cnt[1001]={0},flag=true;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        cnt[temp]++;
        if(n%2==0 && cnt[temp]>n/2){
            flag=false;
        }
        if(n%2==1 && cnt[temp]>(n/2)+1){
            flag=false;
        }
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}

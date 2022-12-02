#include<bits/stdc++.h>
using namespace std;
int arr[4001]={0};
int main(){
    int x,t,min_abs=0,max_abs=0;
    cin>>x>>t;
    arr[x]=1;
    while(t--){
        int typ;
        cin>>typ;
        if(typ==1){
            int d1,d2;
            cin>>d1>>d2;
            arr[d1]=1;
            arr[d2]=1;
        }
        else{
            int d2;
            cin>>d2;
            arr[d2]=1;
        }
    }
    for(int i=1;i<x;i++){
        if(arr[i]==0 && arr[i+1]!=0){
            min_abs++;
            max_abs++;
        }
        if(arr[i]==0 && arr[i+1]==0){
            max_abs+=2;
            min_abs++;
            i++;
        }
    }
    cout<<min_abs<<" "<<max_abs;

}

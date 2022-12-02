#include<bits/stdc++.h>
using namespace std;
vector<long long> vec;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        if(i>0)
            vec.push_back(val+vec[i-1]);
        else
            vec.push_back(val);
    }
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int findv;
        cin>>findv;
        int lo=0,high=n-1,mid;
        while(high>lo+1){
            mid=(lo+high)/2;
            if(vec[mid]>=findv){
                high=mid;
            }
            else if(vec[mid]<findv){
                lo=mid+1;
            }
        }
        if(vec[lo]>=findv) cout<<lo+1<<endl;
        else if(vec[high]>=findv) cout<<high+1<<endl;
        else cout<<mid+1<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,t,a,b,da,db;
    cin>>x>>t>>a>>b>>da>>db;

    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            int val=(a-(da*i))+(b-(db*j));
            if(val==x || x==(a-(da*i)) || x==(b-(db*i)) || x==0)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}

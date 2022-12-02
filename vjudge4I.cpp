#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isprime(int val){
    for(int i=2;i<=sqrt(val);i++){
        if(val%i==0)
            return false;
    }
    return true;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        ll val;
        cin>>val;
        ll sqt_num=sqrt(val);
        if(sqt_num*sqt_num==val && val!=1){
            if(isprime(sqt_num)){
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}

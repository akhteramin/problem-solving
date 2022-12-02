#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    while(q--){
        int a,b;
        unsigned long long n;
        cin>>n>>a>>b;
        if(2*a<=b)
        {
            cout<<n*a<<endl;
        }
        else{
            cout<<(n/2)*b+(n%2)*a<<endl;
        }

    }
}

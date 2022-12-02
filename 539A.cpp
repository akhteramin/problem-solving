#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,v;
    cin>>n>>v;
    if(n-1<=v)
        cout<<n-1<<endl;
    else{
        int cost=v;
        for(int i=2;i<n;i++){
            v--;
            if(v<n-i)
            {
                v++;
                cost+=i;
            }
            else{
                break;
            }
        }
        cout<<cost<<endl;
    }

}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cnt=0;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(b-a>1)
            cnt++;
    }
    cout<<cnt<<endl;
}

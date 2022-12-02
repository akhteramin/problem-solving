#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    int cnt=0;
    for(int i=0;i<a.length();i++){
        if(a[i]!=b[i])
            cnt++;
    }
    cout<<cnt<<endl;
}

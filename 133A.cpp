#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int i=0;
    for(;i<str.length();i++){
        if(str[i]=='H' || str[i]=='Q' || str[i]=='9'){
            cout<<"YES"<<endl;
            break;
        }
    }
    if(i==str.length())
        cout<<"NO"<<endl;
}

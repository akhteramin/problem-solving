#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int size_0=0,size_1=0;
    int i=0;
    cin>>str;
    for(;i<str.length();i++){
        if(size_0>6 || size_1>6)
        {
            cout<<"YES"<<endl;
            break;
        }
        if(str[i]=='0'){
            ++size_0;
            size_1=0;
        }
        else if(str[i]=='1')
        {
            ++size_1;
            size_0=0;
        }
    }

    if(i==str.length() && size_0 <7 && size_1<7)
        cout<<"NO"<<endl;
    else if(i==str.length() && (size_0 >6 || size_1>6))
        cout<<"YES"<<endl;
}


#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2;
    cin>>str1>>str2;
    int i=0;
    for(;i<str1.length();i++){
        if(str1[i]!=str2[str2.length()-1-i]){
            cout<<"NO"<<endl;
            break;
        }
    }
    if(i==str1.length())
        cout<<"YES"<<endl;
}

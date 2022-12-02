#include<bits/stdc++.h>
using namespace std;
int main(){
    string str,str2="hello";
    cin>>str;
    int dummy=0,cnt=0;
    for(int i=0;i<str2.length();i++){
        for(int j=dummy;j<str.length();j++){
            if(str2[i]==str[j])
            {
                dummy=j+1;
                cnt++;
                break;
            }
        }
    }
    if(cnt==5){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}

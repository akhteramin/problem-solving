#include<bits/stdc++.h>
using namespace std;
int main(){
    string str,str2;
    cin>>str;
    str2=str;
    if(str2[0]>96){
        str2[0]=(char)(str2[0]-32);
    }
    else{
        str2[0]=(char)(str2[0]+32);
    }
    int i=1;
    for(;i<str2.length();i++){
        if(str2[i]<97)
            str2[i]=(char)(str2[i]+32);
        else if(str2[i]>96)
        {
            cout<<str<<endl;
            break;
        }
    }
    if(i==str.length())
        cout<<str2<<endl;
}

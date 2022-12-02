#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    vector<char> ch;
    for(int i=0;i<str.length();i++){
        if(str[i]!='+')
            ch.push_back(str[i]);
    }
    sort(ch.begin(),ch.end());
    cout<<ch[0];
    for(int i=1;i<ch.size();i++){
        cout<<"+"<<ch[i];
    }
}

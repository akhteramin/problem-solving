#include<bits/stdc++.h>
using namespace std;
char tolower(char ch){
    if(ch<97)
        return (char)(ch+32);
    return ch;
}
int main(){
    string s1,s2;
    int i=0;
    cin>>s1>>s2;
    for(;i<s1.length();i++){
        if(tolower(s1[i])>tolower(s2[i]) ){
            cout<<"1"<<endl;
            break;
        }
        else if(tolower(s1[i])<tolower(s2[i])){
            cout<<"-1"<<endl;
            break;
        }
    }
    if(i==s1.length())
        cout<<"0"<<endl;
}

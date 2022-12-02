#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    if(str[0]>96)
        str[0]=(char)(str[0]-32);
    cout<<str<<endl;
}

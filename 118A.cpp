#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;

    for(int i=0;i<str.length();i++){
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' &&
           str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U'){
            cout<<'.';

            if(str[i]<97)
            {
                cout<<(char)(str[i]+32);
            }
            else
                cout<<str[i];
        }
    }
}

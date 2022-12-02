#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;

int main() {
    string str;
    cin>>str;
    int cnt=0;
    bool flag=true;
    while(flag){
        cnt++;
        int i=0;
        bool found=false;
        if(str.length()<2)
            break;
        for(i=1;i<str.length();i++){
            if(str[i]==str[i-1])
            {
                string temp_str=str.substr(0,i-1)+str.substr(i+1,str.length());
                str=temp_str;
                found=true;
                break;
            }
        }
        if(!found)
            break;

    }
    if(cnt%2==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}




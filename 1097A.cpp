#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <cstring>
using namespace std;
int main(){
    string str,strin[5];
    bool flag=true;
    int len=5;
    cin>>str;
    int i=0;
    while(len--){
        cin>>strin[i];
        if(str[0]==strin[i][0] || str[1]==strin[i][1])
            flag=false;
        i++;
    }
    if(flag==false){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}

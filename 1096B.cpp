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
    unsigned long long no_input=0,cnt=0,l=0,r=0;
    cin>>no_input>>str;
    for(int i=0;i<no_input-1;i++){
        if(str[i]!=str[i+1])
        {
            l=i+1;
            break;
        }

    }
    for(int i=no_input-1;i>0;i--){
        if(str[i]!=str[i-1])
        {
            r=no_input-i;
            break;
        }
    }
    if(str[0]!=str[no_input-1])
        cout<<(l+r+1)%998244353<<endl;
    else if(str[0]==str[no_input-1] && l<r)
        cout<<((l+1)*(r+1))%998244353<<endl;
    else
        cout<<(((no_input*(no_input-1)/2)+no_input))%998244353<<endl;

}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <cstring>
using namespace std;
int main(){
    int n,l,r,d;
    cin>>n;
    while(n--){
        cin>>l>>r>>d;
        if(l>d){
            cout<<d<<endl;
        }
        else{
            int val=d*((r/d)+1);
            cout<<val<<endl;
        }
    }
}


#include<bits/stdc++.h>
using namespace std;
int main(){
    int w1,h1,w2,h2;
    cin>>w1>>h1>>w2>>h2;
    int base=8;
    if(w1>1){
        base=base+(w1-1)*2;
    }
    if(h1+h2>1)
    {
        base=base+(h1+h2-1)*2;
    }
    cout<<base<<endl;
}

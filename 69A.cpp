#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sumA=0,sumB=0,sumC=0;
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        sumA+=a;
        sumB+=b;
        sumC+=c;

    }
    if(sumA==0 && sumB==0 && sumC==0){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}

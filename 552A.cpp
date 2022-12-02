#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    long long sum=max(max(a,b),max(c,d));
    if(sum==a)
        cout<<sum-b<<" "<<sum-c<<" "<<sum-d<<endl;
    else if(sum==b)
        cout<<sum-a<<" "<<sum-c<<" "<<sum-d<<endl;
    else if(sum==c)
        cout<<sum-a<<" "<<sum-b<<" "<<sum-d<<endl;
    else if(sum==d)
        cout<<sum-c<<" "<<sum-b<<" "<<sum-a<<endl;


}

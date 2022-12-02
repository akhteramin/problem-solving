#include<bits/stdc++.h>
using namespace std;
vector<int> vec;
int main(){
    int a,b,c,d,perfor=0;
    cin>>a>>b>>c>>d;
    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);

    sort(vec.begin(),vec.end());

    if(vec[1]-vec[0]<d)
    {
        perfor+=d-(vec[1]-vec[0]);
    }
    if(vec[2]-vec[1]<d){
        perfor+=d-(vec[2]-vec[1]);
    }
    cout<<perfor<<endl;

}

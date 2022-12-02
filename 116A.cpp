#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0,min_v=0;
    while(n--){
        int a,b;
        cin>>a>>b;
        sum=sum-a+b;
        if(sum>min_v)
            min_v=sum;
    }
    cout<<min_v<<endl;
}

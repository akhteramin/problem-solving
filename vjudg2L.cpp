#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int cnt=0;
    while(sum<n){
        if(cnt%2==0){
            sum+=1;
        }
        else if(cnt%2==1){
            sum+=2;
        }

        if(sum<=n){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}

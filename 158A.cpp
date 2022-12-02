#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,pos,pivot;
    cin>>n>>pos;
    int cnt=0;
    for(int i=1;i<=n;i++){
        int temp;
        cin>>temp;
        if(i<=pos && temp>0){
            cnt++;
            if(i==pos)
                pivot=temp;
        }
        else if(temp==pivot && temp>0 && i>pos)
            cnt++;

    }
    cout<<cnt<<endl;
}

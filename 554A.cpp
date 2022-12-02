#include<bits/stdc++.h>
using namespace std;
vector<int> key;
vector<int> chest;
int main(){
    int tesn,testk;
    cin>>tesn>>testk;
    int odd1=0,even1=0,cnt=0;
    for(int i=0;i<tesn;i++){
        int temp;
        cin>>temp;
        chest.push_back(temp);
        if(temp%2==0)
            even1++;
        else
            odd1++;
    }
    for(int i=0;i<testk;i++){
        int temp;
        cin>>temp;
        key.push_back(temp);
        if(temp%2==0 && odd1>0){
            odd1--;
            cnt++;
        }
        if(temp%2==1 && even1>0){
            even1--;
            cnt++;
        }

    }
    cout<<cnt<<endl;
}

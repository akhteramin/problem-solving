#include<bits/stdc++.h>
using namespace std;
int arr[100001]={0};
int main(){
    int cnt;
    string str;
    bool finite=false;
    int prev=1,curr=1;
    cin>>cnt>>str;
    int step[cnt+1];
    for(int i=1;i<=cnt;i++){
        cin>>step[i];
    }
    while(1){
        prev=curr;
        arr[curr]++;
        if(arr[curr]>1){
            cout<<"INFINITE"<<endl;
            return 0;
        }
        if(str[curr-1]=='>')
            curr+=step[curr];
        else if(str[curr-1]=='<')
            curr-=step[curr];
        if(curr<1 || curr>cnt)
        {
            cout<<"FINITE"<<endl;
            return 0;
        }

    }

    cout<<"FINITE"<<endl;

}

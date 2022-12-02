#include<bits/stdc++.h>
using namespace std;
queue< pair<string, int> > Q;
int main(){
    int n,cm,sum=0;
    cin>>n>>cm;
    while(n--){
        string str;int val;
        cin>>str>>val;
        Q.push(make_pair(str,val));
    }
    while(!Q.empty()){
        if(Q.front().second<=cm){
            sum+=Q.front().second;
            cout<<Q.front().first<<" "<<sum<<endl;
            Q.pop();
        }
        else{
            sum+=cm;
            Q.push(make_pair(Q.front().first,Q.front().second-cm));
            Q.pop();
        }
    }
}

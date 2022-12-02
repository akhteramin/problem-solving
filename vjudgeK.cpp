#include<bits/stdc++.h>
using namespace std;
priority_queue<int> Q;
int main(){
    string inp;
    while(1){
        cin>>inp;
        if(inp=="end")
            break;
        if(inp=="insert")
        {
            int val;
            cin>>val;
            Q.push(val);
        }
        if(inp=="extract")
        {
            cout<<Q.top()<<endl;
            Q.pop();
        }

    }

}

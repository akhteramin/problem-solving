#include<bits/stdc++.h>
using namespace std;
deque<int> val;
int main(){
    int n;
    cin>>n;
    while(n--){
        int typ;
        cin>>typ;
        if(typ==0){
            int pl,temp;
            cin>>pl>>temp;
            if(pl==0)
                val.push_front(temp);
            else
                val.push_back(temp);
        }
        if(typ==1){
            int pos;
            cin>>pos;
            cout<<val[pos]<<endl;
        }
        if(typ==2){
            int temp;
            cin>>temp;
            if(temp==0)
                val.pop_front();
            else
                val.pop_back();
        }
    }
}

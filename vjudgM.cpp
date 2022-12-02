#include<bits/stdc++.h>
using namespace std;
vector<int> val;
int main(){
    int n;
    cin>>n;
    while(n--){
        int typ;
        cin>>typ;
        if(typ==0){
            int temp;
            cin>>temp;
            val.push_back(temp);
        }
        if(typ==1){
            int pos;
            cin>>pos;
            cout<<val[pos]<<endl;
        }
        if(typ==2){
            val.pop_back();
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    vector< vector<int> > vec(n);

    while(q--){
        int typ;
        cin>>typ;
        if(typ==0){
            int pos,val;
            cin>>pos>>val;
            vec[pos].push_back(val);
        }
        if(typ==1){
            int pos;
            cin>>pos;
            for(int i=0;i<vec[pos].size();i++){
                if(i<vec[pos].size()-1)
                    cout<<vec[pos][i]<<" ";
                else
                    cout<<vec[pos][i];
            }
            cout<<endl;
        }
        if(typ==2){
            int pos;
            cin>>pos;
            vec[pos].erase(vec[pos].begin(),vec[pos].end());
        }
    }
}

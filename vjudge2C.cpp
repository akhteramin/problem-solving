#include<bits/stdc++.h>
using namespace std;
vector<int> vec;
int main(){
    int n,m,d;
    cin>>n>>m>>d;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int val;
            cin>>val;
            vec.push_back(val);
        }
    }
    int mean=0,steps=0;
    bool flg=true;
    sort(vec.begin(),vec.end());
    mean=vec[vec.size()/2];
    for(int i=0;i<vec.size();i++){
        int dist=abs(mean-vec[i]);
        if(dist%d==0){
            steps+=(dist/d);
        }
        else
            flg=false;
    }
    if(flg){
        cout<<steps<<endl;
    }
    else
        cout<<"-1"<<endl;
}

#include<bits/stdc++.h>
using namespace std;
vector<int> vec;
int main(){
    int test;
    cin>>test;
    for(int i=1;i<=test;i++){
        int n,m;
        cin>>n>>m;
        vec.clear();
        for(int z=0;z<n;z++){
            int val;
            cin>>val;
            vec.push_back(val);
        }
        int low=0,high=1000000000,mid=0;
        for(int j=0;j<100;j++){
            mid=(low+high)/2;
            int container=1,cap_val=0;
            for(int k=0;k<n;k++){
                if(vec[k]>mid){ container=1000000001; break;}
                if(vec[k]+cap_val<=mid) cap_val+=vec[k];
                else{container++; cap_val=vec[k]; }
            }

            if(container<=m)  high=mid;
            else low=mid+1;
        }
        cout<<"Case "<<i<<": "<<mid<<endl;
    }
}


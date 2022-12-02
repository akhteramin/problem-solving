#include<bits/stdc++.h>
using namespace std;
int main(){
    int q,cnt=0;
    int range_s=0,range_l=0;

    vector<pair<int,int> > vec;
    cin>>q;
    vec.push_back(make_pair(0,0));
    for(int i=1;i<=q;i++){
        int t1,t2;
        cin>>t1>>t2;

        vec.push_back(make_pair(t1,t2));
        if(i>1 && vec[i].first==vec[i-1].first && vec[i].second==vec[i-1].second)
            continue;
        if(vec[i-1].first>vec[i].second || vec[i].second<vec[i-1].first)
            continue;
        else{
            cnt=cnt+abs(max(vec[i-1].first,vec[i-1].second)-min(vec[i].first,vec[i].second))+1;
        }

    }
    if(cnt<=max(vec[q].first,vec[q].second)+1)
        cout<<cnt<<endl;
    else
        cout<<max(vec[q].first,vec[q].second)+1<<endl;
}

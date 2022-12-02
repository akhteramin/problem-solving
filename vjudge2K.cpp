#include<bits/stdc++.h>
using namespace std;
vector<pair< pair<int,int>, pair<int, string> > > vec;

string str[100001];

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,v,s;
        cin>>str[i]>>a>>v>>s;
        vec.push_back(make_pair(make_pair(-a,-v),make_pair(s,str[i])));
    }
    //sort(vecstr.begin(),vecstr.end());
    sort(vec.begin(),vec.end());


    for(int i=0;i<vec.size();i++){
        cout<<vec[i].second.second<<endl;
    }
}

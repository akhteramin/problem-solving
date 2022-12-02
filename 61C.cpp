#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    int arr[n+1]={0};
    vector< pair<int,int> > arrp;
    for(int i=0;i<q;i++){
        int l,r,cont=0;
        cin>>l>>r;
        arrp.push_back(make_pair(l,r));
        for(int j=l;j<=r;j++){
            arr[j]++;
        }

    }

    for(int i=0;i<arrp.size()-1;i++){
        int tm[n+1];
        for(int k=1;k<=n;k++){
            tm[k]=arr[k];
        }
        for(int j=0;j<arrp.size();j++){

        }
    }
}

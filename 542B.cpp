#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector< pair <int,int> > val;
    cin>>n;
    for(int i=0;i<2*n;i++){
        int tem;
        cin>>tem;
        val.push_back(make_pair(tem,i+1));
    }
    sort(val.begin(),val.end());
    unsigned long long s1=0;
    for(int i=0;i<2*n;i++)
    {
        if(i==1 && i%2==1){
            s1=s1+val[i].second-1;
        }
        if(i==0 && i%2==0){
            s1=s1+val[i].second-1;
        }
        if(i>1){
            if(i%2==1){
                s1=s1+abs(val[i-2].second-val[i].second);
            }
            else{
                s1=s1+abs(val[i-2].second-val[i].second);

            }
        }
    }
    cout<<s1<<endl;
}

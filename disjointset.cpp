#include<bits/stdc++.h>
using namespace std;
int par[100]={0};
int find_rep(int a){
    if(par[a]==a)
        return a;
    else{
        par[a]=find_rep(par[a]);
        return par[a];
    }

}
void make_union(int a, int b){
    int repA = find_rep(a);
    int repB = find_rep(b);
    //cout<<repA<<" "<<repB<<endl;
    if(repA==repB)
        cout<<"Already in same network"<<endl;
    else
        par[repA]=repB;

}
string sameSet(int a, int b){
    int u=find_rep(a);
    int v=find_rep(b);
    if(u!=v)
        return "false";
    else
        return "true";
}
int main(){
    int N=0,cnt_subnet=0;
    cin>>N;

    for(int i=1;i<=N;i++)
    {
        par[i]=i;
    }
    int type;
    int a,b;
    while(true){
        cin>>type>>a>>b;
        if(type==1){

            make_union(a,b);
        }

        else if(type==2){

            for(int i=1;i<=N;i++)
            {
                if(par[i]==i)
                    cnt_subnet++;

            }
            cout<<cnt_subnet<<endl;
        }
        else if(type==3){
            cout<<sameSet(a,b)<<endl;
        }
    }
}

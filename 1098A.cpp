
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <cstring>
using namespace std;
int minimum=-1,reset_minimum=-1;
bool flag=true;
int DFSUtil(int v, vector<int> adj[], bool visited[], int v_value[]){
    visited[v]=true;
    if(v==1){
        reset_minimum=v_value[v];
    }
    if(minimum<v_value[v]){
        minimum=v_value[v];
        reset_minimum=minimum;
    }
    if(reset_minimum>v_value[v] && v_value[v]!=-1)
    {
        flag=false;
        return -1;
    }
    for(int i=0;i<adj[v].size();i++){
        if(!visited[adj[v][i]]){
            DFSUtil(adj[v][i],adj,visited,v_value);
        }
    }
    return minimum;
}
void DFS(int v, vector<int> adj[],int v_value[])
{
    bool visited[100001];
    int min_val = DFSUtil(v,adj,visited,v_value);
    if(flag)
        cout<<min_val<<endl;
    else cout<<"-1"<<endl;
}
int main() {
    int no_vertex,v_value[100001];
    vector<int> vertex_vec[100001];
    cin>>no_vertex;
    int temp=no_vertex-1;

    while(temp--){
        int edge;
        cin>>edge;
        vertex_vec[edge].push_back(no_vertex-temp);
    }
    for(int i=1;i<=no_vertex;i++){
        cin>>v_value[i];
    }
    DFS(1,vertex_vec,v_value);

}


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k,min_sum=0;
    cin>>n>>m>>k;
    vector<int> arr;
    priority_queue<int> dist_arr;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        arr.push_back(val);
        if(i>0)
            dist_arr.push(-(arr[i]-arr[i-1]));
    }
    min_sum=n;
    //sort(dist_arr.begin(),dist_arr.end());
    while(n>k){
        n--;
        min_sum=min_sum-1+(-1*(dist_arr.top()));
        dist_arr.pop();
    }
    cout<<min_sum<<endl;
}


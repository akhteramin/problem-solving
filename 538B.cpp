#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <queue>

using namespace std;

int main() {
    priority_queue<pair<int, int> > Q;
    priority_queue<int, vector<int>, greater<int> > Qind;

    long long sum=0;
    int n,m,k;
    cin>>n>>m>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        Q.push(make_pair(arr[i],i));
    }
    for(int i=0;i<m*k;i++){
        sum+=Q.top().first;
        Qind.push(Q.top().second);
        Q.pop();
    }
    cout<<sum<<endl;
    int cnt=0;
    while(!Qind.empty()){
        cnt++;
        if(k==1)
            break;
        if(cnt==m){
            cout<<Qind.top()+1<<" ";
            cnt=0;
            k--;
        }
        Qind.pop();

    }
    cout<<endl;
}

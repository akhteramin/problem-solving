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

priority_queue<int> Q[200];


int main() {
    int n,k;
    cin>>n>>k;
    unsigned long long pr[200000];
    for(int i=0;i<n;i++){
        cin>>pr[i];
    }
    string str;
    vector<unsigned long> vec[200];
    unsigned long long sum=0;
    cin>>str;
    for(int i=0;i<n;i++){
        //vec[str[i]].push_back(pr[i]);
        Q[str[i]].push(pr[i]);
        //sort(vec[str[i]].begin(), vec[str[i]].end(), greater<long>());

        if(str[i]!=str[i-1] && i>0)
        {
            int j=0;
            while(!Q[str[i-1]].empty()){
                //if(j>k-1)
                //    break;
                if(j<=k-1)
                    sum+=Q[str[i-1]].top();
                Q[str[i-1]].pop();
                j++;
            }
            //vec[str[i-1]].clear();
        }

    }
    for(int i=97;i<=122;i++){
        int j=0;
        while(!Q[i].empty()){
            if(j>k-1)
                break;
            sum+=Q[i].top();
            Q[i].pop();
            j++;
        }

    }
    cout<<sum<<endl;
}

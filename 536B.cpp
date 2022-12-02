#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <queue>
#define PII pair<int, int>

using namespace std;
priority_queue<PII, vector<PII>, greater<PII> > Q;

int main()
{
    int n,m;
    cin>>n>>m;
    unsigned long long a[n+1],cost[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin>>cost[i];
        Q.push(make_pair(cost[i], i));
    }
    while(m--)
    {
        int t,d;
        unsigned long long bill=0;

        cin>>t>>d;

        while(d!=0)
        {
            if(Q.empty()){
                d=0;
                bill=0;
                continue;
            }

            if(d>a[t] && a[t]!=0){
                d=d-a[t];
                bill+=a[t]*cost[t];
                a[t]=0;

            }
            if(d>a[t] && a[t]==0)
            {

                while(!Q.empty() && a[Q.top().second]==0)
                    Q.pop();

                if(!Q.empty()) t=Q.top().second;
            }
            else if(d<=a[t]){
                a[t]=a[t]-d;
                bill+=cost[t]*d;
                d=0;
            }
        }

        cout<<bill<<endl;

    }

}

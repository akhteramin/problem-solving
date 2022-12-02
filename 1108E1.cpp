#include <bits/stdc++.h>

using namespace std;
int main() {
    int n,m,max_ans=-9999999;
    cin>>n>>m;
    vector<int> arr;
    priority_queue<int> PQ,PQD;
    vector<pair<int, int> > range;
    for(int i=0;i<n;i++)
    {
        int tempo;
        cin>>tempo;
        arr.push_back(tempo);
        PQ.push(tempo);
        PQD.push(-1*tempo);
        max_ans=PQ.top() - (-1*PQD.top());
    }
    for(int i=0;i<m;i++)
    {
        int tempx,tempy;
        cin>>tempx>>tempy;
        range.push_back(make_pair(tempx,tempy));
    }

    vector<bool> v(m);
    int r_val=0;
    vector<bool> ans_v(m);
    if(n>1){
        for(int r=1;r<=m;r++){
            fill(v.end() - r, v.end(), true);
            do {

                vector<int> temp=arr;

                for (int i = 0; i < m; ++i) {
                    if (v[i]) {
                        for(int j=range[i].first-1;j<=range[i].second-1;j++)
                        {
                            temp[j]--;
                        }
                    }
                }

                if( *max_element(temp.begin(), temp.end()) - *min_element(temp.begin(), temp.end()) > max_ans)
                {
                    max_ans=*max_element(temp.begin(), temp.end()) - *min_element(temp.begin(), temp.end());
                    r_val=r;
                    ans_v=v;
                }
            } while (next_permutation(v.begin(), v.end()));

        }
    }
    if(max_ans==-9999999 || n==1)
        max_ans=0;
    cout<<max_ans<<endl<<r_val<<endl;
    for(int i=0;i<m;i++)
        if(ans_v[i])
            cout<<i+1<<" ";
    cout<<endl;
    return 0;
}

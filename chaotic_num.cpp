#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
int max_num(int i,int j)
{
    if(i>j)
        return i;
    else
        return j;
}

int main(){
    int T;
    cin >> T;

    while(T--){
        int no_bribe=0;
        int chaotic=0;
        int n;
        cin >> n;
        vector<int> q(n);
        for(int q_i = 0;q_i < n;q_i++){
           cin >> q[q_i];

        }
        for(int i=0;i<q.size();i++){
            if(q[i]-i-1>2)
            {
                cout<<"Too chaotic"<<endl;
                chaotic=1;
                break;
            }
             for(int j=max_num(0,i-2);j<i;j++)
             {
                 if(q[i]<q[j])
                    no_bribe++;
             }

        }
        if(!chaotic){
            cout<<no_bribe<<endl;
        }

    }

    return 0;
}


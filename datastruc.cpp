#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N,Q;
    cin>>N>>Q;
    vector<int> arr[N];
    int lastAns=0;
    while(Q--){
        int type,x,y;
        cin>>type>>x>>y;
        int temp=(x^lastAns)%N;
        if(type==1)
        {

            arr[temp].push_back(y);
        }
        if(type==2)
        {
            int index=(y%(arr[temp].size()));
            lastAns=arr[temp].at(index);
            cout<<lastAns<<endl;
        }
    }

    return 0;
}

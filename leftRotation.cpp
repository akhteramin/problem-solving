#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> val;
    vector<int>::iterator it;
    int n,d;
    cin>>n>>d;
    while(n--)
    {
        int inp;
        cin>>inp;
        val.push_back(inp);
    }
    while(d--)
    {
        int temp =val.front();
        val.erase(val.begin());
        //it=val.begin();
        val.push_back(temp);
        for(int i=0;i<val.size();i++){
            cout<<val.at(i)<<" ";
        }
        cout<<endl;

    }



}

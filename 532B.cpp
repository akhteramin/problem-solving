#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;

int main() {
    int n,m;
    string str;
    cin>>n>>m;
    vector<int> final_arr[m];
    int final_pos[100001]={0};
    for(int i=0;i<m;i++){
        int temp;
        cin>>temp;
        final_arr[final_pos[temp]].push_back(temp);

        if(final_arr[final_pos[temp]].size()==n)
        {
            str+="1";
        }
        else
        {
            str+="0";
        }
        final_pos[temp]++;
    }
    cout<<str<<endl;
}


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;

int main() {
    int n,k,arr_cnt[200]={0},arr[200]={0},max_val=0;
    cin>>n>>k;
    string str;
    cin>>str;
    for(int i=0;i<n;i++){
        arr[str[i]]++;
        if(arr[str[i]]%k==0)
        {
            arr_cnt[str[i]]++;
            if(max_val<arr_cnt[str[i]])
                max_val=arr_cnt[str[i]];
        }
        if(arr[str[i]]==1 && i>0)
        {
            arr[str[i-1]]=0;
        }
    }
    cout<<max_val<<endl;

}


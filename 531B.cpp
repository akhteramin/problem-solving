#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <cstring>
using namespace std;

int main() {
    int n,k;
    vector<int> arr_col[5001];
    int a[5001]={},color[5001]={};
    bool flag=true;
    cin>>n>>k;
    int temp=n;
    int i=0;
    while(temp--){
        cin>>a[i];
        i++;
    }
    int tempB[5001];
    copy(a, a+n, tempB);
    sort(tempB, tempB+n);
    for(int i=0;i<n;i++){
        int j=0;
        for(j=i;j<i+k;j++)
        {
            if(find(arr_col[tempB[i]].begin(), arr_col[tempB[i]].end(),j%k+1)==arr_col[tempB[i]].end())
            {
                color[i]=j%k+1;
                arr_col[tempB[i]].push_back(color[i]);
                break;
            }

        }
        if(j==i+k)
        {
            cout<<"NO"<<endl;
            flag=false;
            break;
        }

    }
    if(flag){
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            cout<<arr_col[a[i]].back()<<" ";
            arr_col[a[i]].pop_back();
        }
        cout<<endl;
    }

}


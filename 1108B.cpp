#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;

int main() {
    int t=0,max_v=0,max_v2=0,max_ind=0,arr_cnt[10001]={0};
    cin>>t;
    int arr[t]={0};
    for(int i=0;i<t;i++){
        cin>>arr[i];
        if(arr[i]>max_v){
            max_v=arr[i];
            max_ind=i;
        }
    }
    arr[max_ind]=0;
    arr_cnt[max_v]=1;
    for(int i=0;i<t;i++){

        if(arr[i]!=0 && arr_cnt[arr[i]]==0 && max_v%arr[i]==0){
            arr_cnt[arr[i]]=1;
            arr[i]=0;
        }

    }
    for(int i=0;i<t;i++){
        if(arr[i]>max_v2)
            max_v2=arr[i];
    }
    cout<<max_v<<" "<<max_v2<<endl;

}


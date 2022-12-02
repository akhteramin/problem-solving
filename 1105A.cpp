#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;

int main() {
    int n,min_dist=1000000000,t,min_val=100,max_val=-1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<min_val)
            min_val=arr[i];
        if(arr[i]>max_val)
            max_val=arr[i];
    }
    for(int i=min_val;i<=max_val;i++){
        int dist=0;
        for(int j=0;j<n;j++){
            if(arr[j]>i)
                dist+=abs(arr[j]-i-1);
            else if(arr[j]<i)
                dist+=abs(i-1-arr[j]);
        }
        if(dist<min_dist)
        {
            min_dist=dist;
            t=i;
        }
    }
    cout<<t<<" "<<min_dist<<endl;
}

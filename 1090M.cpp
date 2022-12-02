#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;

int main() {
    int cnt=0,max_size=0;
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i>0 && arr[i]==arr[i-1])
        {
            if(max_size<cnt)
                max_size=cnt;
            cnt=1;
        }
        else
            cnt++;
    }
    if(cnt>max_size)
        cout<<cnt<<endl;
    else
        cout<<max_size<<endl;

}

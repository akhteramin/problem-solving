#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <cstdlib>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    sort(arr+1,arr+n+1);

    unsigned long long sum=0;
    for(int i=1;i<=n/2;i++){
        sum=sum+(pow(arr[i]+arr[n-i+1],2));
    }
    cout<<sum<<endl;
}

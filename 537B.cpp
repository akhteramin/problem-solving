#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <queue>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,k;
    cin>>n>>k>>m;
    long long sum=0;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum=sum+a[i];
    }
    sort(a,a+n);
    double max_ans;
    for(int i=0;i<min(n,m);i++){
        double ans=(sum+min(m-i,k*(n-i)))/(n-i);
        if(ans>max_ans)
            max_ans=ans;
        sum=sum-a[i];
    }

    cout<<fixed<<setprecision(20)<<max_ans<<endl;

    //cout<<ans<<endl;

}


#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        unsigned long long temp,compv;
        cin>>temp;
        unsigned long long lo=1,hi=temp,mid;

        while(hi - lo > 1){

             mid = (lo + hi) / 2;

            if((mid*(mid+1))/2 < temp){
                lo = mid + 1;
            }
            else if(mid*(mid+1)/2 >= temp){
                hi = mid;
            }

        }
        if(lo*(lo+1)/2 > temp) cout << lo-1 << endl;
        else if(lo*(lo+1)/2 == temp) cout << lo << endl;
        else if(hi*(hi+1)/2 > temp) cout << hi-1 << endl;
        else if(hi*(hi+1)/2 == temp) cout << hi << endl;

    }
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long n,b;
    unsigned long long min_sum=1000000000000000000;
    cin>>n>>b;
    for(unsigned long long i=2;i<=b;i++)
    {
        unsigned long long cnt=0;
        if(i*i>b) i=b;
        while(b>0){
            if(b%i==0){
                b/=i;cnt++;
            }
            else
                break;
        }

        if(cnt==0) continue;
        unsigned long long temp_n=n;
        unsigned long long sum=0;
        while(temp_n>0){
            temp_n=temp_n/i;
            sum+=temp_n;
        }
        min_sum=min(sum/cnt,min_sum);
    }
    cout<<min_sum<<endl;
}

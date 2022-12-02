#include<bits/stdc++.h>
using namespace std;


//int isPrime[200000];
vector < int > divisors[500002];



int main()
{
    //sieve(500000);
    int q;
    cin>>q;
    while(q--){
        int val,sum=0;
        cin>>val;
        for(int i=2;i<=sqrt(val);i++){
            if(val%i==0){
                if (i==(val/i))
                    sum += i;
                else
                    sum += (i + val/i);
            }
        }
        if(val>1)
            cout<<sum+1<<endl;
        else
            cout<<sum<<endl;
    }

    return 0;
}


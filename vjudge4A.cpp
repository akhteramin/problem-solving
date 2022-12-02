#include<bits/stdc++.h>
using namespace std;


int isPrime[200000];
///if x is prime, isPrime[x] = 0
///else isPrime[x] = 1
vector < int > primes;

int divcount[200000];
///divcount[i] = number of distinct divisor

vector < int > divisors[200000];
/// divisor[i] -> all prime divisors of i

void sieve(int n)
{
    for(int i = 2; i <= n; i++){

        if(isPrime[i]) continue;
        primes.push_back(i);

        for(int j = 2 * i; j <= n; j += i) {
            isPrime[j] = 1;

            divcount[j]++;
            divisors[j].push_back(i);
        }

        divisors[i].push_back(i);

    }
}



int main()
{

    int n,k;
    cin>>n>>k;
    sieve(n);
    int cnt=0,prev=2,cur=3;
    for(int i = 2; i <= n; i++){
        if(prev+cur+1>n)
            break;
        if(isPrime[i]==0){
            prev=cur;
            cur=i;
            if(isPrime[prev+cur+1]==0){
                //cout<<prev<<" "<<cur<<endl;
                cnt++;
            }
        }


    }
    //cout<<cnt<<endl;
    if(cnt>=k)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}

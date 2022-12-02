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
    sieve(3005);
    int n,cnt=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(divisors[i].size()==2){
            cnt++;
        }
    }
    cout<<cnt<<endl;

    return 0;
}


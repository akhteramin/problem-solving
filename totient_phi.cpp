#include<bits/stdc++.h>
using namespace std;

//phi(n) = number values such that gcd(n, val) = 1 and val < n
//
//phi(n) = n - 1, if n is prime

//phi(n) = n * (1 - 1/p1) * (1 - 1/p2) * ... * (1 - 1/pm)

//phi(72) = 72 * (1 - 1/2) * (1 - 1/3)

//phi(7) = 7 * (1 - 1/7)

int phi[1000001];
bool isPrime[1000001];


//(1 - 1/i) = (i - 1) / i
void sieve(int n)
{
    for(int i = 1; i <= n; i++) phi[i] = i;

    for(int i = 2; i <= n; i++){
        if(isPrime[i]) continue;

        for(int j = i + i; j <= n; j += i){

            phi[j] = (phi[j] / i) * (i - 1);
            isPrime[j] = 1;
        }

        phi[i] = (phi[i] / i) * (i - 1);

    }

}

int main()
{
    sieve(1000000);
    int test;
    cin>>test;
    while(test--){
    int n;
    cin >> n;
    int ans = 0;
    /*for(int i = 1; i < n; i++){

        if(__gcd(i, n) == 1) ans++;

    }*/



    cout << phi[n] << endl;
    }
    return 0;
}

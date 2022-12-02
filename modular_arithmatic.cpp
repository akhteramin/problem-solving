
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll mod = 1e9 + 7;
ll fct[200000];

//12 % 7 = 5
//19 % 7 = 5
//26 % 7 = 5

/// returns (n ^ k) % mod
ll powr(ll n, ll k)
{
    ll re = 1;
    for(ll i = 1; i <= k; i++) re = (re * n) % mod;
    return re;
}

ll fnc(ll n, ll k)
{
    if(k == 1) return n % mod;

    ll re = fnc(n, (k / 2));
    re = (re * re) % mod;

    if(k % 2 == 1) {
        re = (re * n) % mod;
    }

    return re;
}

//fnc(n, 22) = (fnc(n, 11) * fnc(n, 11)) % mod;
//fnc(n, 11) =  ( (fnc(n, 5) * fnc(n, 5)) % mod ) * n) % mod ;
//fnc(n, 5) = ( (fnc(n, 2) * fnc(n, 2)) % mod ) * n) % mod ;
//fnc(n, 2) = (fnc(n, 1) * fnc(n, 1)) % mod;
//fnc(n, 1) = n % mod

int main()
{

//    -8 % 5 = -3


    ll a, b;
    ll ans = 0;

//    ans = (a / b) % mod;
//    ans = ((a % mod) / (b % mod) ) % mod
//
//    ans = (a * (1 / b)) % mod;
//
//    ans = ( (a%mod) * ((1/b) % mod) ) % mod;

//    a = 10, b = 2, mod = 3
//
//    ans = (10 / 2) % 3 = 2



    for(ll i = 1; i <= 100; i++) {

        ans = ans % mod;
        i = i % mod;

        ans = (ans - i) % mod;
        if(ans < 0) ans += mod;
    }
    ans = ans % mod;
    cout << ans << endl;

    fct[0] = 1;
//    n! = n * (n - 1)!
    for(ll i = 1; i <= 100000; i++) {
        fct[i] = (fct[i - 1] * i) % mod;
    }


    return 0;
}

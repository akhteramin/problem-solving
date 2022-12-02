#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mod = 1e9 + 7;
ll ncr[1000][1000];
//
//1
//1 1



int main()
{

    ll n = 500;

    ncr[0][0] = 1;
    for(ll i = 1; i <= n; i++) ncr[i][0] = 1, ncr[i][1] = i;

    for(ll i = 2; i <= n; i++){

        for(ll j = 2; j <= n; j++){
            ncr[i][j] = (ncr[i - 1][j] + ncr[i - 1][j - 1]) % mod;
        }

    }

    for(ll i = 0; i <= 10; i++){
        for(ll j = 0; j <= i; j++) cout << ncr[i][j] << ' ';
        cout << endl;
    }

//    fnc(n, r) = ( fnc(n - 1, r) + fnc(n - 1, r - 1) ) % mod;

    return 0;
}

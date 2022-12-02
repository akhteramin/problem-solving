#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 10000007
#define mod 100000007
#define PI acos(-1.0)

#define mx1 5005

int dr[] = {-2,-2,-1,-1,1,1,2,2};
int dc[] = {-1,1,-2,2,-2,2,-1,1};

vector <ll> vc;

int main()
{
    ll m, tc, t = 1;

    //freopen("/media/morol/574830c2-aaf8-40d8-9a94-7a029a2e831f/coding/clion/p1/output.txt", "w", stdout);

    sc1(tc);

    while (tc--){

        ll num, tscase, left, right, size;

        sc2(size, tscase);

        vc.clear();

        for(ll i = 0; i < size; i++){
            sc1(num);
            vc.push_back(num);
        }

        printf("Case %d:\n", t++);

        while (tscase--){

            sc2(left, right);

            ll first = lower_bound(vc.begin(), vc.end(), left) - vc.begin();
            ll last = upper_bound(vc.begin(), vc.end(), right) - vc.begin();

            pf1(last - first);
        }
    }

    return 0;

}


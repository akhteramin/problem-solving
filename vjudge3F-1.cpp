#include<bits/stdc++.h>
using namespace std;
/// Typedef
typedef long long ll;
vector <ll> vc;
int main()
{
    ll m, tc, t = 1;
    scanf("%lld",&tc);
    while (tc--){
        ll num, tscase, left, right, sz;
        scanf("%lld %lld",&sz,&tscase);
        vc.clear();
        for(ll i = 0; i < sz; i++){
            scanf("%lld",&num);
            vc.push_back(num);
        }

        printf("Case %d:\n", t++);

        while (tscase--){
            scanf("%lld %lld",&left,&right);
            ll first = lower_bound(vc.begin(), vc.end(), left) - vc.begin();
            ll last = upper_bound(vc.begin(), vc.end(), right) - vc.begin();
            printf("%lld\n",last-first);
        }
    }

    return 0;

}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>primes;
ll status[312505];
bool check(ll val,ll pos){
    return (bool)(val & 1<<pos);
}
ll setv(ll val, ll pos){
    val= (val | 1<<pos);
    return val;
}

void sieve(ll N)
{
	 ll sqrtN;
     sqrtN=sqrt(N);
     for( ll i =3;i<=sqrtN; i += 2 )
     {
		 if( check(status[i/32],i%32)==0)
		 {

	 		 for( ll j = i*i; j <= N; j += (i<<1) )
			 {
                status[j/32]=setv(status[j/32],j%32);
                cout<<"val::"<<i<<endl;
	 		 }
		 }
	 }
	 primes.push_back(2);
	 for(ll i=3;i<=N;i+=2){
		 if( check(status[i/32],i%32)==0){
            primes.push_back(i);
		 }
	 }
}
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
bool checkPrime(ll value){
    for(int i=2;i<sqrt(value);i++){
        if(value%i==0)
            return false;
    }
    return true;
}
int main(){
    sieve(100000000000000);
    ll val;
    while(1){
        cin>>val;
        if(val==0)
            break;
        if(checkPrime(val))
            cout<<val<<endl;
        //else


    }
}

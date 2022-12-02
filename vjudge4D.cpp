#include<bits/stdc++.h>
using namespace std;
int status[2688380];
vector<int> primes;
bool check(int val,int pos){
    return (bool)(val & 1<<pos);
}
int setv(int val, int pos){
    val= (val | 1<<pos);
    return val;
}

void sieve(int N)
{
	 int sqrtN;
     sqrtN=sqrt(N);
     for( int i =3;i<=sqrtN; i += 2 )
     {
		 if( check(status[i/32],i%32)==0)
		 {
	 		 for( int j = i*i; j <= N; j += (i<<1) )
			 {
				 status[j/32]=setv(status[j/32],j%32)   ;
	 		 }
		 }
	 }
	 primes.push_back(2);
	 for(int i=3;i<=N;i+=2){
		 if( check(status[i/32],i%32)==0){
            primes.push_back(i);
		 }
	 }
}
int main(){
    sieve(86028122);
    int q;
    cin>>q;
    while(q--){
        int val;
        cin>>val;
        cout<<primes[val-1]<<endl;
    }
}

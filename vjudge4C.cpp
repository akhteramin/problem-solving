#include<bits/stdc++.h>
using namespace std;
int value[100001]={0};
vector<int> active;


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


int gcd(int a, int b){
    if(a==0)
        return b;
    return gcd(b%a,a);
}
int main()
{
    sieve(100001);
    int n,m;
    cin>>n>>m;
    while(m--){
        char c;
        int inp;
        cin>>c>>inp;
        if(c=='+'){
            if(value[inp]==1){
                cout<<"Already on"<<endl;
                continue;
            }
            else{
                int flag=false;
                for(int i=0;i<active.size();i++){
                    for(int j=0;j<divisors[inp].size();j++){
                        if(active[i]%divisors[inp][j]==0){
                            cout<<"Conflict with "<<active[i]<<endl;
                            flag=true;
                            break;
                        }
                    }
                    if(flag)
                        break;
                    /*if(gcd(inp,active[i])>1){
                        cout<<"Conflict with "<<active[i]<<endl;
                        flag=true;
                        break;
                    }*/
                }
                if(!flag){
                    value[inp]=1;
                    active.push_back(inp);
                    cout<<"Success"<<endl;
                    continue;
                }
            }
        }
        else{
            if(value[inp]==0){
                cout<<"Already off"<<endl;
                continue;
            }
            else{
                value[inp]=0;
                vector<int>::iterator it = find(active.begin(), active.end(), inp);
                active.erase(it);
                cout<<"Success"<<endl;
            }
        }
    }
    return 0;
}



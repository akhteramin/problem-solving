#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <cstdlib>

using namespace std;
unsigned long long myXOR(unsigned long long x, unsigned long long y)
{
   return (x | y) & (~x | ~y);
}
unsigned long long myAnd(unsigned long long x, unsigned long long y){
    return x&y;
}
int main() {
    int q;
    cin>>q;
    unsigned long long a;
    while(q--)
    {
        cin>>a;
        unsigned long long max_v=0;
        for(unsigned long long i=1;i<a;i++)
        {
            //cout<<myXOR(a,i)<<endl;
            //cout<<myAnd(a,i)<<endl;
            //cout<<"gcd::"<<__gcd(myXOR(a,i), myAnd(a,i))<<endl;

            if(__gcd(myXOR(a,i), myAnd(a,i))>max_v)
                max_v=__gcd(myXOR(a,i), myAnd(a,i));
        }
        cout<<max_v<<endl;
    }
}

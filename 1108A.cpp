#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;

int main() {
    int test;
    cin>>test;
    int l1,r1,l2,r2;
    while(test--){
        cin>>l1>>r1>>l2>>r2;
        if(l1!=r2)
            cout<<l1<<" "<<r2<<endl;
        else
            cout<<l1<<" "<<l2<<endl;

    }
}

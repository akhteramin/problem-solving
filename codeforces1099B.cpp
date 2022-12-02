#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;


int main() {
    double n;

    cin>>n;
    int val1=sqrt(n);
    long val2=ceil(n/val1)+val1;
    cout<<val2<<endl;


    return 0;
}



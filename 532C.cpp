#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <iomanip>

#define PI 3.14159265

using namespace std;

int main() {
    double n,r;
    cin>>n>>r;
    double theta=(360/n);
    double ans=sin(theta*PI/360);
    double ans_val=r/((1/ans)-1);
    printf("%.7Lf", ans_val);
    //cout<<ans_val<<endl;
}

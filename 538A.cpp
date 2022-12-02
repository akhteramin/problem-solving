#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <cstdlib>

using namespace std;

int main() {
    int a,b,c,g,p,bl;
    cin>>a>>b>>c>>g>>p>>bl;

    if(a<=g && b<=(g+p-a) && c<=(g+p-b-a)+bl){
            cout<<"YES"<<endl;

    }
    else
    {
        cout<<"NO"<<endl;
    }

}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;

int main() {
    int n,max_val=0,max_no=0;
    cin>>n;
    for(int i=1;i<10;i++){
        if(n%i==0){
            max_val=i;
            max_no=n/i;
        }
    }
    cout<<max_no<<endl;
    for(int i=0;i<max_no;i++)
    {
        cout<<max_val<<" ";
    }
    cout<<endl;

}


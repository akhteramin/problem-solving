#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;

int main(){
    int a,cnt=0;
    cin>>a;
    while(a!=0){
        if(a%2==1)
        {
            a--;
            cnt++;
        }
        else
        {
            a=a>>1;

        }
    }
    cout<<cnt<<endl;
}

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
    int b,k;
    cin>>b>>k;
    int a[k]={0};
    char seq[k];
    for(int i=0;i<k;i++){
        cin>>a[i];
        if(i==k-1)
        {
            if(a[i]%2==0)
                seq[i]='e';
            else
                seq[i]='o';
        }
        else
        {
            if(b%2==1 && a[i]%2==1)
            {
                seq[i]='o';
            }
            else if((b%2==0 && a[i]%2==1) || (b%2==1 && a[i]%2==0))
            {
                seq[i]='e';
            }
            else if(b%2==0 && a[i]%2==0)
                seq[i]='e';

        }
    }

    char ans=seq[0];
    for(int i=1;i<k;i++){
        if(ans=='o' && seq[i]=='o')
            ans='e';
        else if((ans=='o' && seq[i]=='e') || (ans=='e' && seq[i]=='o'))
            ans='o';
        else
            ans='e';
    }
    if(ans=='o')
        cout<<"odd"<<endl;
    else
        cout<<"even"<<endl;
}

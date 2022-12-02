#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long int arr[10000001]={0};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long int N,M,MAX=0;
    cin>>N>>M;
    long int x=0;
    while(M--)
    {
        long int a,b,k;
        cin>>a>>b>>k;
        arr[a]+=k;
        if(b+1<=N) arr[b+1]-=k;
    }
    for(long int i=1;i<=N;i++)
    {
        x+=arr[i];
        if(MAX<x) MAX=x;
    }
    cout<<MAX;
    return 0;
}


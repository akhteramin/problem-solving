#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int max_val(int a,int b,int c,int d)
{
    int max_num=0;
    if(max_num<a)
    {
        max_num=a;
    }
    if(max_num<b)
    {
        max_num=b;
    }
    if(max_num<c)
    {
        max_num=c;
    }
    if(max_num<d)
    {
        max_num=d;
    }
    return max_num;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N,q;
    cin>>q;
    while(q--)
    {
        cin>>N;
        int arr[257][257]={0};
        for (int i=0;i<2*N;i++)
        {
            for(int j=0;j<2*N;j++)
            {
                cin>>arr[i][j];
            }
        }

        int m=2*N;
        int sum=0;
        for (int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                sum+=max_val(arr[i][j],arr[i][m-j-1],arr[m-i-1][j],arr[m-i-1][m-j-1]);
            }
        }
    cout<<sum<<endl;
    }

    return 0;
}

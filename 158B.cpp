#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    int arr[5]={0};
    while(n--)
    {
        int temp;
        cin>>temp;
        arr[temp]++;
    }
    int min_4=min(arr[1],arr[3]);
    arr[4]+=min_4+(arr[2]/2);
    arr[1]-=min_4;
    arr[3]-=min_4;
    arr[2]=arr[2]-(2*(arr[2]/2));
    float rest=(2*arr[2])+arr[1];

    cout<<ceil(rest/4)+arr[3]+arr[4]<<endl;
    //cout<<ceil(val)<<endl;
}

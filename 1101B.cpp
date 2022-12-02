#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;

int main() {
    string str;
    cin>>str;
    int arr[4]={-1,-1,-1,-1};
    int cnt1=0,cnt2=0;
    for(int i=0,j=str.length()-1;i<str.length(),j>=0;i++,j--){
        if(str[i]=='[' && cnt1==0)
        {
            cnt1++;
            arr[0]=i;
        }
        if(str[i]==':' && cnt1==1){
            cnt1++;
            arr[1]=i;
        }
        if(str[j]==']' && cnt2==0){
            cnt2++;
            arr[3]=j;
        }
        if(str[j]==':' && cnt2==1)
        {
            cnt2++;
            arr[2]=j;
        }
    }
    //cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3];
    if(arr[0]==-1 || arr[1]==-1 || arr[2]==-1 || arr[3]==-1 || arr[0]>=arr[3] || arr[1]>=arr[2])
    {
        cout<<"-1"<<endl;
        return 0;
    }
    int cnt=4;
    for(int i=arr[1];i<arr[2];i++){
        if(str[i]=='|')
            cnt++;
    }
    cout<<cnt<<endl;
}

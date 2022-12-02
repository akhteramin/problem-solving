#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,length=0;
    cin>>n;
    vector<int> arr;
    for(int i=1;i<=n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i=i+2){
        cout<<arr[i]<<" ";
    }
    if(arr.size()%2==1)
        length=arr.size()-2;
    else
        length=arr.size()-1;
    for(int i=length;i>0;i=i-2){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

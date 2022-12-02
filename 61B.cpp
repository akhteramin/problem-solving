#include<bits/stdc++.h>
using namespace std;
vector<int> vec;
int main(){
    long long sum=0;
    int n,q;
    cin>>n;
    int arr[n];
    while(n--){
        int temp;
        cin>>temp;
        sum+=temp;
        vec.push_back(temp);
    }
    sort(vec.begin(),vec.end());
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>arr[i];
    }
    for(int j=0;j<q;j++){
         cout<<sum-vec[vec.size()-arr[j]]<<endl;
    }
}

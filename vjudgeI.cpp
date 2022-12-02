#include<bits/stdc++.h>
using namespace std;
vector<int> vec;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        vec.push_back(temp);
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<n;i++){
        if(i==n-1)
            cout<<vec[i]<<endl;
        else
            cout<<vec[i]<<" ";
    }
}

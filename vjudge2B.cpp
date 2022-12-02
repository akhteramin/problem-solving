#include<bits/stdc++.h>
using namespace std;
vector<int> vec;
int main(){
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    sort(vec.begin(),vec.end());
    if(vec.size()%2==0){
        cout<<vec[(vec.size()/2)-1]<<endl;
    }
    else{
        cout<<vec[vec.size()/2]<<endl;
    }
}

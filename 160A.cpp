#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    vector<int> vec;
    cin>>n;
    while(n--){
        int temp;
        cin>>temp;
        sum+=temp;
        vec.push_back(temp);
    }
    sort(vec.begin(),vec.end());
    int sum_par=0,cnt=0;
    for(int i=vec.size()-1;i>=0;i--){
        sum_par+=vec[i];
        cnt++;
        if(sum_par>sum/2)
            break;
    }
    cout<<cnt<<endl;
}

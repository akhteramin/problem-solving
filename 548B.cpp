#include<bits/stdc++.h>
using namespace std;
vector<int> vec;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        vec.push_back(val);
    }
    long long cur_sum=vec[n-1],max_sum=0;
    int cu_vi=vec[n-1];
    for(int i=n-1;i>0;i--){

        if(vec[i-1]>cur_sum){
            cur_sum=vec[i-1];
            cu_vi=vec[i-1];
        }
        else if(cu_vi>vec[i-1]){
            cur_sum+=vec[i-1];
            cu_vi=vec[i-1];
        }
        else if(cu_vi<=vec[i-1] && cu_vi>1){
            cu_vi--;
            cur_sum+=cu_vi;
            if(cu_vi==1){
                if(max_sum<cur_sum){
                    max_sum=cur_sum;
                }
                cur_sum=vec[i-1];
                cu_vi=vec[i-1];
            }
        }
        else if(cu_vi<=vec[i-1] && cu_vi==1){
            if(max_sum<cur_sum){
                max_sum=cur_sum;
            }
            cur_sum=vec[i-1];
            cu_vi=vec[i-1];
        }
    }
    if(cur_sum>max_sum)
        cout<<cur_sum<<endl;
    else
        cout<<max_sum<<endl;
}

#include<bits/stdc++.h>
using namespace std;
//////////////use bubble sort to solve this problem/////////////////
vector<int> vec;

int main(){
    int n,begin_d=0,end_d=0;
    cin>>n;
    while(n--){
        int temp;
        cin>>temp;
        vec.push_back(temp);
    }
    int cnt=0;
    for(int i=0;i<vec.size();i++){
        for(int j=vec.size()-1;j>i;j--){
            if(vec[j]<vec[j-1]){
                swap(vec[j],vec[j-1]);
                cout<<j<<" "<<j+1<<endl;
                cnt++;
                if(cnt==19999)
                    return 0;
            }
        }
    }
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>

using namespace std;
int main() {
    int n,zero_index=0;
    map<int,int> cnt_map;
    map<int,int> cnt_status;

    vector<int> val,arr;

    cin>>n;

    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
        if(arr[0]==temp)
            zero_index=i;
    }

    int cnt=1;
    for(int i=zero_index;i<n;i++){
        vector<int>sorted;
        sorted.push_back(arr[0]);
        if(i!=0){
            copy(arr.begin(), arr.begin()+zero_index, back_inserter(sorted));
            sort(sorted.begin(),sorted.end());
            if (binary_search(sorted.begin(), sorted.end(), arr[i])){
                zero_index=i;
                cnt=1;
            }
            else{
                if(cnt_map[arr[i]]<1){
                    cnt++;
                    cnt_map[arr[i]]++;
                    cnt_status[arr[i]]=cnt;
                }
                else
                {
                    cnt=cnt_status[arr[i]];
                }
            }
        }
    }
    //%998244353
    int value=pow(2,cnt-1);
    cout<<value%998244353<<endl;

}

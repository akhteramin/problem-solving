#include<bits/stdc++.h>
using namespace std;
vector<int> arr;
deque<int> DQ;
int main(){
    int val,sz;
    cin>>val>>sz;
    while(val--){
        int value;
        cin>>value;
        arr.push_back(value);
    }
    for(int i=0;i<arr.size();i++){
        int back_v;
        if(DQ.empty()){
            DQ.push_back(i);
        }
        else{
            while(!DQ.empty() && arr[DQ.back()]>=arr[i])
            {
                DQ.pop_back();
            }

            while(!DQ.empty() && i-DQ.front()+1>sz)
            {
                DQ.pop_front();
            }
            DQ.push_back(i);
            if(i>=sz-1)
                cout<<arr[DQ.front()]<<" ";
        }
    }
    cout<<endl;

}

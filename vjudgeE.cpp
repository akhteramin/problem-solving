#include<bits/stdc++.h>
using namespace std;
vector<int> arr;
int main(){
    int n,cnt=0,mini;
    cin>>n;
    while(n--){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    for(int i = 0;i< arr.size();i++){
     mini = i;
     for(int j = i;j< arr.size();j++){
         if(arr[j] < arr[mini])
             mini = j;
     }
     if(i!=mini){
        swap(arr[i],arr[mini]);
        cnt++;
     }
    }
    for(int i = 0;i<arr.size();i++){
        if(i==arr.size()-1)
            cout<<arr[i]<<endl;
        else
            cout<<arr[i]<<" ";
    }

    cout<<cnt<<endl;
}

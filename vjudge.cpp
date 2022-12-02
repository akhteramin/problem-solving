#include<bits/stdc++.h>
using namespace std;
vector<int> arr;

void fibonacci(int v){
    for(int i=2;i<=v;i++)
    {
        arr.push_back((arr[i-1]+arr[i-2])%100000);
    }
}
int main(){
    arr.push_back(0);
    arr.push_back(1);
    fibonacci(1100000);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int start,finish;
        cin>>start>>finish;
        priority_queue<int> copyv;

        cout<<"Case "<<i+1<<": ";
        for(int i=start-1;i<=start+finish-1;i++){
            copyv.push(-1*arr[i]);
            //if(copyv.size()==100)
            //    break;
            //cout<<arr[i]<<" ";
        }
        // sort(copyv.begin(),copyv.end());
        int cont=0;
        while(!copyv.empty()){
            cont++;
            cout<<(-1)*copyv.top()<<" ";
            copyv.pop();
            if(cont==100)
                break;
        }
        cout<<endl;
    }
}

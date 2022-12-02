#include<bits/stdc++.h>
using namespace std;
vector<int> arr;
int main(){
    int n,b,a,batter,accu=0;
    cin>>n>>b>>a;
    batter=b,accu=a;
    while(n--){
        int val;
        cin>>val;
        arr.push_back(val);
    }
    int cnt=0;
    for(int i=0;i<arr.size();i++){
        //cout<<batter<<" "<<accu<<endl;
        if(batter+accu<1)
            break;
        if(arr[i]==1){
            if(accu<a && batter>0){
                accu++;
                batter--;
            }
            else
                accu--;
        }
        else{

            if(arr[i+1]==1 && accu!=0)
                accu--;
            else if(batter<accu)
                accu--;

            else
                batter--;
        }
        cnt=i;
    }
    cout<<cnt+1<<endl;
}


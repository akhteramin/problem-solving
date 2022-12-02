#include<bits/stdc++.h>
using namespace std;
vector<int> vec;
int main(){
    int n;
    cin>>n;
    while(n--)
    {
        int temp;
        cin>>temp;
        vec.push_back(temp);
    }
    int cnt=0;
    for(int i=0;i<vec.size();i++){
        for(int j=vec.size()-1;j>i;j--){
            if(vec[j]<vec[j-1]){
                swap(vec[j],vec[j-1]);
                cnt++;
            }
        }
    }
    for(int i=0;i<vec.size();i++){
        if(i==vec.size()-1)
            cout<<vec[i]<<endl;
        else
            cout<<vec[i]<<" ";
    }
    cout<<cnt<<endl;

}

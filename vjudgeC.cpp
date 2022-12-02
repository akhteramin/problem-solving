#include<bits/stdc++.h>
using namespace std;
vector<int> vec;
int main(){
    int n;
    cin>>n;
    while(n--){
        int temp;
        cin>>temp;
        vec.push_back(temp);
    }
    int pivot=0;
    int len=vec.size();
    for(int k=0;k<len;k++){
        if(k==len-1)
                cout<<vec[k]<<endl;
            else
                cout<<vec[k]<<" ";
    }
    for(int i=1;i<len;i++){
        pivot=i;
        for(int j=i-1;j>=0;j--){
            if(vec[j]>vec[pivot]){
                swap(vec[pivot],vec[j]);
                pivot=j;

            }
            else{
                break;
            }
        }
        for(int k=0;k<len;k++){
            if(k==len-1)
                cout<<vec[k]<<endl;
            else
                cout<<vec[k]<<" ";
        }

    }
}

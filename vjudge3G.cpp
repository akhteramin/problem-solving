#include<bits/stdc++.h>
using namespace std;
vector<int> vec;
int main(){
    int test;
    cin>>test;
    for(int z=1;z<=test;z++){
        int val,cnt=0;
        cin>>val;
        vec.clear();
        while(val--){
            int tempo;
            cin>>tempo;
            vec.push_back(tempo);
        }
        sort(vec.begin(),vec.end());
        int siz=vec.size();
        for(int i=0;i<siz-2;i++){
            int k=i+2;
            for(int j=i+1;j<siz-1;j++){
                while(k<siz && vec[i]+vec[j]>vec[k]){
                    ++k;
                }
                if(k>j)
                    cnt += k - j - 1;
            }
        }

        cout<<"Case "<<z<<": "<<cnt<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
vector<int> vec;
set<int> setv;
int main(){
    int test;
    cin>>test;
    while(test--){
        int val;
        cin>>val;
        vec.push_back(val);
        setv.insert(val);
    }
    if(setv.size()==3){
        //sort(vec.begin(),vec.end());
        vector<int> value;
        int sum=0;
        for(set<int>::iterator it=setv.begin();it!=setv.end();++it)
        {
            value.push_back(*it);
            sum+=*it;
        }
        sort(value.begin(),value.end());
        if(sum%3==0 && (sum/3)==value[1])
            cout<<value[1]-value[0]<<endl;
        else
            cout<<"-1"<<endl;

    }
    else if(setv.size()==2){
        set<int>::iterator it=setv.end();
        int val;
        for (it=setv.begin(); it!=setv.end(); ++it){
            val=*it;
        }
        //cout<<val<<endl;

        set<int>::iterator itb = setv.begin();
        //set<int>::iterator ite = setv.end();
        //cout<<" "<<*itb<<endl;
        if(abs(val-*itb)%2==0)
            cout<<abs(val-*itb)/2<<endl;
        else
            cout<<abs(val-*itb)<<endl;
    }
    else if(setv.size()==1){
        cout<<"0"<<endl;
    }
    else
        cout<<"-1"<<endl;

}

#include<bits/stdc++.h>
using namespace std;
map<string, int> mmap;
int main(){
    int n;
    cin>>n;
    while(n--){
        int typ;
        cin>>typ;
        if(typ==0){
            string key;int val;
            cin>>key>>val;
            map<string,int>::iterator it;
            it = mmap.find(key);
            if (it != mmap.end())
                it->second=val;
            else
                mmap.insert(make_pair(key,val));
        }
        else if(typ==1){
            string key;
            cin>>key;
            map<string,int>::iterator it;
            it = mmap.find(key);
            if (it != mmap.end())
                cout<<it->second<<endl;

        }

    }
}


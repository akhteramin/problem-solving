#include<bits/stdc++.h>
using namespace std;
set<int> vec;
int main(){
    int n;
    cin>>n;
    while(n--){
        int ins;
        cin>>ins;
        if(ins==0){
            int val;
            cin>>val;
            vec.insert(val);
            cout<<vec.size()<<endl;
        }
        else if(ins==1){
            int findv;
            cin>>findv;
            set<int>::iterator itr;
            itr = vec.find(findv);
            if(itr!=vec.end())
                cout<<"1"<<endl;
            else
                cout<<"0"<<endl;
        }
        else{
            int findv;
            cin>>findv;
            vec.erase(findv);
        }
    }
}

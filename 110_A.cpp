#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <cstdlib>

using namespace std;

int main() {
    int quer=0,test_size=0;
    cin>>quer;
    while(quer--){
        string str;
        cin>>test_size>>str;
        int first=str[0]-'0';
        string second=str.substr(1,test_size);

        if(second.length()==1){
            if(first>= (second[0]-'0')){
                cout<<"NO"<<endl;

            }
            else{
                cout<<"YES"<<endl;
                cout<<"2"<<endl;
                cout<<first<<" "<<second<<endl;
            }

        }
        else {
            cout<<"YES"<<endl;
            cout<<"2"<<endl;
            cout<<first<<" "<<second<<endl;
        }
    }

}

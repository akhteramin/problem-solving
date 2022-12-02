#include<bits/stdc++.h>
using namespace std;
int main(){
    int si;
    string str;
    cin>>si>>str;
    int cnt=0;
    for(int i=0;i<str.size();i++){
        int val=(str[i]-'0');
                if(val%2==0)
                {
                    cnt+=(i+1);
                }
    }
    cout<<cnt<<endl;
}

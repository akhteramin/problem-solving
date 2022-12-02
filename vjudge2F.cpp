#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2;
    bool flag_z=false;
    int cnt1=0,cnt2=0;
    cin>>str1>>str2;
    if(str1.length()!=str2.length())
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0;i<str1.length();i++){
            if(str1[i]=='0'){
            cnt1++;
            }
            if(str2[i]=='0'){
                cnt2++;
            }

    }
    if((cnt1==str1.length() || cnt2==str1.length()) && cnt1!=cnt2)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}

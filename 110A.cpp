#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long str;
    cin>>str;
    long long cnt_4=0;
    while(str!=0){
        if(str%10==4 || str%10==7){
            ++cnt_4;
        }
        str/=10;
    }

    if(cnt_4==4 || cnt_4==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

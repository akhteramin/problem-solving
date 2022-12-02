#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;


int main() {
    int length,cnt=0,total_flip=0;
    string str;
    string match_str="010";
    cin>>length>>str;
    for(int i=0;i<str.size();i++){
        if(str[i]==match_str[cnt])
        {
            cnt++;
            if(cnt==3)
            {
                (str[i]=='1')?str[i]=0 : str[i]=1;
                cnt=0;
                total_flip++;
            }
        }
        else
        {
            cnt=0;
        }
    }
    cout<<total_flip<<endl;

    return 0;
}



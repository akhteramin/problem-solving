#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;
int main(){
    int n;
    string str;
    cin>>n>>str;
    string saver[6]={"BRG","GRB","RBG","BGR","GBR","RGB"};
    int dist_cnt=1000000,pattern=0;
    for(int i=0;i<6;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(j%3==0 && str[j]!=saver[i][0])
            {
                cnt++;
            }
            if(j%3==1 && str[j]!=saver[i][1])
            {
                cnt++;
            }
            if(j%3==2 && str[j]!=saver[i][2])
            {
                cnt++;
            }
        }
        if(dist_cnt>cnt)
        {
            dist_cnt=cnt;
            pattern=i;

        }
    }
    string final_str;
    for(int i=0;i<n/3;i++){
        final_str+=saver[pattern];
    }
    final_str+=saver[pattern].substr(0,(n%3));
    cout<<dist_cnt<<endl;
    cout<<final_str<<endl;

}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;
int main(){
    char storage[3]={'R','G','B'},X,Y,Z;
    int n;
    string str;
    cin>>n>>str;
    int cnt=1,change_cnt=0;
    for(int i=0;i<n;i++){
        if(str[i]==str[i+1])
        {
            cnt++;
            X=str[i];
        }
        else if(str[i]!=str[i+1] || i==n-1){
            X=str[i];Y=str[i+1];
            int step=0;
            for(int j=i-cnt+1;j<=i;j++){
                step++;
                if(step%2==0){
                    if( (X=='R' && Y=='G') || (X=='G' && Y=='R'))
                        str[j]='B';
                    else if( (X=='B' && Y=='G') || (X=='G' && Y=='B') )
                        str[j]='R';
                    else if( (X=='B' && Y=='R') || (X=='R' && Y=='B') )
                        str[j]='G';
                    else if(X=='R')
                        str[j]='B';
                    else if(X=='B')
                        str[j]='G';
                    else if(X=='G')
                        str[j]='R';

                    change_cnt++;
                }
            }
            cnt=1;
        }
    }
    cout<<change_cnt<<endl;
    cout<<str<<endl;
}

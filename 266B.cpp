#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    string str;
    cin>>n>>t>>str;
    for(int i=1;i<=t;i++){
        for(int j=0;j<n-1;j++){
            if(str[j]=='B' && str[j+1]=='G'){
                swap(str[j],str[j+1]);
                j++;
            }
        }
    }
    cout<<str<<endl;
}

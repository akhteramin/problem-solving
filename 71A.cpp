#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string str;
        cin>>str;
        if(str.length()<11)
            cout<<str<<endl;
        else
            cout<<str[0]<<str.length()-2<<str[str.length()-1]<<endl;
    }

}

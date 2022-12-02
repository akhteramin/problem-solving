#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <queue>
using namespace std;
bool vowel(char ch){
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        return true;
    return false;
}
int main(){
    string s,t;
    cin>>s>>t;
    if(s.length()!=t.length())
        cout<<"No"<<endl;
    else{
        for(int i=0;i<s.length();i++)
        {
            if(vowel(s[i]) != vowel(t[i]))
            {
                cout<<"No"<<endl;
                return 0;
            }
        }
        cout<<"Yes"<<endl;
    }

}

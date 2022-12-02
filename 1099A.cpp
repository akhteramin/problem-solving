#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <cstring>
using namespace std;

int main() {
    string a;
    char arr[201];
    int len,cnt=0;
    int i=0;
    cin>>a;
    cin>>len;
    for(int i=0;i<a.length();i++){
        if(a[i]!='*' && a[i]!='?')
            cnt++;
    }
    int j=0;
    for(int i=0;i<a.length();i++){
        if(cnt>len && (a[i]=='*' || a[i]=='?')){
            arr[j]='\0';
            j--;
            cnt--;
        }
        else if(cnt<len && (a[i]=='*' || a[i]=='?')){
            if(a[i]=='*')
            {
               int repeat=abs(cnt-len);
               while(repeat--)
                {
                    arr[j]=a[i-1];
                    j++;
                    cnt++;
                }
            }
        }
        else{
            if(a[i]!='*' && a[i]!='?')
            {
                arr[j]=a[i];
                j++;

            }
        }

    }

    if(j==len){
        arr[j]='\0';
        cout<<arr<<endl;
    }
    else
        cout<<"Impossible"<<endl;
    return 0;
}




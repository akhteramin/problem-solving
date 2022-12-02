#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;

int main() {
    int arr[200]={0};
    char str[200];
    scanf(" %[^\n]s",str);

    for(int i=0;i<strlen(str);i++)
    {
         if(str[i]==' ' || (str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
            {
                arr[str[i]]++;
                }
    }
    for(int i=32;i<123;i++)
    {
        if(((char)i==' ' || ((char)i>=65 && (char)i<=90) || ((char)i>=97 && (char)i<=122)) && arr[(char)i]>0)
            cout<<(char)i<<":"<<arr[(char)i]<<endl;
    }
    vector<int> space_place;
    for(int i=0;i<strlen(str);i++)
    {
         if(str[i]=='.' || str[i]==',' || str[i]==';' || str[i]==':' || str[i]=='\'' || str[i]=='"')
            {
                cout<<str[i+1]<<endl;
                return 0;
            }
        if(str[i]==' '){
            space_place.push_back(i)
        }
    }



}


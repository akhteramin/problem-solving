#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int prev;
    string str;
    int arr[300];
    for(int i=0;i<300;i++)
    {
        arr[i]=-1;
    }
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        //cout<<"baire::"<<arr[str[i]]<<" "<<str[i]<<endl;
        if(arr[str[i]]!=-1)
        {
            //cout<<i<<" "<<str[i]<<endl;

            str[arr[str[i]]]='1';
            arr[str[i]]=-1;
            str[i]='1';

        }
        else
        {
            arr[str[i]]=i;

        }


    }
    int empty=1;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]!='1')
        {
            cout<<str[i];
            empty=0;
        }

    }
    if(empty==1)
    {
        cout<<"Empty String"<<endl;
    }
    return 0;
}

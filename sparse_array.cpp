#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N,Q;
    vector<string> str;
    cin>>N;
    while(N--)
    {
        string temp;
        cin>>temp;
        str.push_back(temp);
    }
    cin>>Q;
    while(Q--)
    {
        string srch;
        cin>>srch;
        int cnt=0;
        for(int i=0;i<str.size();i++)
        {
            if(srch.compare(str.at(i))==0)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int test;
    cin>>test;
    while(test--)
    {
        int del_cnt=0;
        string str;
        cin>>str;
        vector<char> qA,qB;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='A')
            {
                if(qA.size()==0)
                {
                    qA.push_back(str[i]);
                    if(qB.size()!=0)
                    {
                        qB.pop_back();
                    }

                }
                else
                {
                    del_cnt++;
                }

            }
            else if(str[i]=='B')
            {
                if(qB.size()==0)
                {
                    qB.push_back(str[i]);
                    if(qA.size()!=0)
                    {
                        qA.pop_back();
                    }
                }
                else{
                    del_cnt++;
                }
            }


        }
        cout<<del_cnt<<endl;
    }
    return 0;
}


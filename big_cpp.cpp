#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <stack>
#include <cstdio>
#include <sstream>
using namespace std;
string bigSum(string n,string m)
{
    int MaxLen=0;
    if(n.length()>m.length())
        {
            MaxLen=n.length();
        }
        else
        {
            MaxLen=m.length();
        }
        int hand=0;
        stack<int> st;
        for(int i=(n.length()-1),j=(m.length()-1);MaxLen>0;i--,j--,MaxLen--)
        {
            int temp1=0;
            int temp2=0;
            if(i>=0)
            {
                temp1=n[i]-'0';
            }
            if(j>=0)
            {
                temp2=m[j]-'0';
            }

            int tempSum=temp1+temp2+hand;
            hand=tempSum/10;
            tempSum=tempSum%10;
            st.push(tempSum);
        }
        if(hand!=0)
        {
            st.push(hand);
        }
        string res="";

        while (!st.empty())
        {
            //cout<<st.top();
            ostringstream convert;   // stream used for the conversion
            convert << st.top();
            string temp=convert.str();;
            //cout<<"temp:"<<temp<<endl;
            res.append(temp);
            st.pop();
        }
        return res;
}

int main(){

            string sum="0";
            int num_of_test;
            cin >> num_of_test;
            vector<int> arr(num_of_test);
            for(int arr_i = 0;arr_i <num_of_test;arr_i++){
               cin >> arr[arr_i];

                ostringstream convert;   // stream used for the conversion
                convert << arr[arr_i];
                string temp=convert.str();
                sum=bigSum(sum,temp);
            }
            cout<<sum;

        return 0;
}

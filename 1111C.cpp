#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <cstdlib>

using namespace std;
int n,k,A,B,sum=0;
int divide_con(vector<int> arr){
    if(arr.size()==0)
        return 0;

    if(arr.size()>1)
    {
        vector<int>::const_iterator first = arr.begin();
        vector<int>::const_iterator last = arr.begin() + (arr.size()/2);
        vector<int>::const_iterator first_h = last+1;
        vector<int>::const_iterator last_h = arr.end();

        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]!=0){
                vector<int> temp(first, last);
                divide_con(temp);

                vector<int> temp_h(first_h, last_h);
                divide_con(temp_h);
            }
        }
        sum+=A*arr.size();
    }
    else
        sum+=B*arr.size()*arr[0];

     cout<<sum<<endl;
     return arr.size();
}
int main() {
    cin>>n>>k>>A>>B;
    vector<int> arr;
    while(n--)
        arr.push_back(0);
    while(k--){
        int temp;
        cin>>temp;
        arr[temp]++;
    }
    divide_con(arr);
}

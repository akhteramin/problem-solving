#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>


using namespace std;


int main(){
    vector<int> h;
    for(int h_i = 0;h_i < 26;h_i++){
       int inp;
       cin >> inp;
       h.push_back(inp);
    }
    string word;
    cin >> word;
    int max=0;
    for(int i=0;i<word.length();i++)
    {
        int temp=word[i]-'a';
        if(max<h.at(temp))
            max=h.at(temp);

    }
    cout<<max*word.length()<<endl;
    return 0;
}


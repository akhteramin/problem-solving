#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <cstring>
#include <queue>

using namespace std;

int main() {
    int q=0;
    cin>>q;
    vector<unsigned long int> vec;
    // priority_queue<unsigned long int, vector<unsigned long int> ,greater<unsigned long int> > Q;
    while(q--){
        int value,danger=0;
        char sign;
        cin>>sign>>value;

        if(sign=='+'){
            vec.push_back(value);
            //Q.push(value);

            sort(vec.begin(),vec.end());
            vector<unsigned long int> dummy=vec;
            for(int i=0;i<dummy.size()-1;i++){
                if(2*dummy[i]>=dummy[i+1])
                {
                    danger++;
                }
                dummy[i+1]=dummy[i+1]+dummy[i];
            }

        }
        else{
            for(int i=0;i<vec.size();i++)
            {
                if(vec[i]==abs(value)){
                    vec.erase(vec.begin()+i);
                    break;
                }
            }
            vector<unsigned long int> dummy=vec;
            if(dummy.size()>0)
                for(int i=0;i<dummy.size()-1;i++){
                    if(2*dummy[i]>=dummy[i+1])
                    {
                        danger++;
                    }
                    dummy[i+1]=dummy[i+1]+dummy[i];
                }
        }
        cout<<danger<<endl;
    }

}

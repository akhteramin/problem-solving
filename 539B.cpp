#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0;
    vector<int> v;
    cin>>n;
    while(n--){
        int temp;
        cin>>temp;
        sum+=temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int min_sum=sum;
    for(int i=2;i<v[v.size()-1];i++)
    {
        int t_sum=sum;
        for(int j=v.size()-1;j>0;j--){
            if(v[j]%i==0)
            {
                t_sum=t_sum-(v[j]-(v[j]/i))+((v[0]*i)-v[0]);
                break;
            }
        }
        if(t_sum<min_sum)
            min_sum=t_sum;
    }
    cout<<min_sum<<endl;
}

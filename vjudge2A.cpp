#include<bits/stdc++.h>
#include <iomanip>

using namespace std;
vector<int> vec;
int main(){
    int n,l;
    cin>>n>>l;
    while(n--){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    sort(vec.begin(),vec.end());
    double dist=max(vec[0],l-vec[vec.size()-1]);
    for(int i=0;i<vec.size()-1;i++){
        dist=max((vec[i+1]-vec[i])/2.0,dist);
    }
    printf("%.10f\n",dist);
}

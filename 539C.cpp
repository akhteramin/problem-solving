#include <bits/stdc++.h>
using namespace std;
vector<int> a;

int f(int l) {
     int res[] = {a[l],1,a[l]+1,0};
     return res[a[l]%4];
}

int getXor(int l, int r) {
     return f(l)^f(r-1);
}

int main(){
    int n;
    int cnt=0;
    cin>>n;
    while(n--)
    {
        int temp;
        cin>>temp;
        a.push_back(temp);

    }
    int fun=0;
    for(int i=0;i<a.size()-1;i++)
    {
        for(int j=i+1;j<a.size();j++){
            int mid=(i+j-1)/2;
            if((j-i+1)%2==0){
                if(getXor(i,mid)==getXor(mid+1,j))
                    fun++;
            }
        }
    }
    cout<<fun<<endl;

}

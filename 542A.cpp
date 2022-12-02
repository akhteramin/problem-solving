#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,pos=0,neg=0,min_p=99999999,max_n=-99999999;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        if(temp>0){
            pos++;
            min_p=min(min_p,temp);
        }
        if(temp<0){
            neg++;
            max_n=max(max_n,temp);
        }
    }
    int mid;
    if(n%2==1)
        mid=n/2+1;
    else
        mid=n/2;

    if(pos>=mid)
        cout<<min_p<<endl;
    else if(neg>=mid)
        cout<<max_n<<endl;
    else
        cout<<"0"<<endl;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[7]={2,1,1,2,3,1,3};
    long long nvalue[4]={0};
    //while(1){
    long long max_v=0;
    int min_nv=700000000;
    for(int i=1;i<=3;i++){
        cin>>nvalue[i];
        if(i==1 && nvalue[i]/3<min_nv)
            min_nv=nvalue[i]/3;
        else if(nvalue[i]/2<min_nv)
            min_nv=nvalue[i]/2;
    }
    for(int i=0;i<7;i++){
        long long value[4]={0};
        for(int k=1;k<=3;k++){
            if(k==1)
                value[k]=nvalue[k]-min_nv*3;
            else
                value[k]=nvalue[k]-min_nv*2;
        }
        int cnt_now=0,j=i;
        while(value[arr[j%7]]!=0){
            value[arr[j%7]]--;
            j++;
            cnt_now++;
        }
        if(max_v<cnt_now)
            max_v=cnt_now;
    }
        cout<<max_v+7*min_nv<<endl;
    //}
}

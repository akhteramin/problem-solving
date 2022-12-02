#include<bits/stdc++.h>
using namespace std;
vector<int> arr;

int main()
{
    int q;
    cin>>q;
    while(q--){
        int x, y;
        cin >> x >> y;
        arr.clear();
		for(int i=0;i<=max(x,y);i++)
            arr.push_back(0);
        int cnt=0, min_val=min(x,y),max_val=max(x,y);
        for(int i=1;i<=sqrt(max(x,y));i++){
            int divisor=min_val/i;
            if(arr[i]==0 && min_val%i==0){
                if(min_val%i==0 && max_val%i==0){
                    cnt++;
                    arr[i]=1;
                }
                else{
                    arr[i]=1;
                }

            }
            if(divisor>0 && arr[divisor]==0 && min_val%divisor==0){
                if(min_val%divisor==0 && max_val%divisor==0){
                    cnt++;
                    arr[divisor]=1;
                }
                else{
                    arr[divisor]=1;
                }
            }

        }
        cout<<cnt<<endl;

    }
    return 0;
}


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;

int main() {
    int n,k,arr[101],e=0,s=0;
    cin>>n>>k;
    int i=0,temp=n,maxDiff=0;

    while(temp--){
        cin>>arr[i];
        if(arr[i]==1){
            e++;
        }
        else{
            s++;
        }
        i++;
    }
        for(int i=0;i<k;i++){
            int tempe=e,temps=s;
            for(int j=i;j<n;j=j+k){
                if(arr[j]==1)
                    tempe--;
                else
                    temps--;
                }
            if(maxDiff<abs(tempe-temps))
                maxDiff=abs(tempe-temps);
        }


    cout<<maxDiff<<endl;

}

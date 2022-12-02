#include<bits/stdc++.h>
using namespace std;
int height[50002];
vector<int> query;
set<int> high;
int main(){
    int n,q;
    cin>>n;
    for(int i=1;i<=n;i++){
        int tempo;
        cin>>tempo;
        high.insert(tempo);
    }
    int cnt=1;
    for (set<int>::iterator it=high.begin(); it!=high.end(); ++it){
        height[cnt]=*it;
        cnt++;
    }

    cin>>q;
    for(int i=0;i<q;i++){
        int temp;
        cin>>temp;
        query.push_back(temp);
    }
    for(int i=0;i<q;i++){
        int temp=query[i];
        int lo = 1, hi = cnt-1;
        int mid=1;
        while(hi - lo > 1){

             mid = (lo + hi) / 2;

            if(height[mid] < temp){
                lo = mid + 1;
            }
            else if(height[mid] >= temp){
                hi = mid;
            }

        }
        if(height[lo] >= temp){
            if(height[lo] > temp && height[lo-1]<temp){
                if(lo>1)
                    cout <<height[lo-1]<<" "<< height[lo] << endl;
                else
                    cout <<"X "<< height[lo] << endl;
            }
            else if(height[lo] > temp && height[lo-1]==temp){
                if(lo>2)
                    cout <<height[lo-2]<<" "<< height[lo] << endl;
                else
                    cout<<"X "<<height[lo] << endl;
            }
            else if(height[lo] == temp)
            {
                if(lo>1)
                {
                    if(height[lo+1]==0)
                        cout<<height[lo-1]<<" X"<<endl;
                    else
                        cout<<height[lo-1]<<" "<<height[lo+1]<<endl;

                }
                else{
                    if(height[lo+1]==0)
                        cout<<"X X"<<endl;
                    else
                        cout<<"X "<<height[lo+1]<<endl;
                }
            }
        }
        else if(height[hi] >= temp){
            if(height[hi] > temp && height[hi-1]<temp){
                if(hi>1)
                    cout <<height[hi-1]<<" "<< height[hi] << endl;
                else
                    cout <<"X "<< height[hi] << endl;

            }
            else if(height[hi] > temp && height[hi-1]==temp){
                if(hi>2)
                    cout <<height[hi-2]<<" "<< height[hi] << endl;
                else
                    cout<<"X "<<height[hi] << endl;
            }
            else if(height[hi] == temp)
            {
                if(hi>1){
                    if(height[hi+1]==0)
                        cout<<height[hi-1]<<" X"<<endl;
                    else
                        cout<<height[hi-1]<<" "<<height[hi+1]<<endl;
                }
                else{
                    if(height[hi+1]==0)
                        cout<<"X X"<<endl;
                    else
                        cout<<"X "<<height[hi+1]<<endl;
                }
            }

        }
        else {
            if(temp>height[hi])
                cout<<height[hi]<<" X"<<endl;
            else if(temp<height[lo])
                cout<<"X "<<height[lo]<<endl;
            else
                cout<<"X "<<height[hi]<<endl;

        }

    }
}

#include<bits/stdc++.h>
using namespace std;
vector<int> vec;
vector<int> vecDist;
//ofstream fp;

int main(){
    //fp.open("vjudgeoutput.txt");
    int test;
    cin>>test;
    for(int j=1;j<=test;j++){
        int val,sumDiff=0,prev=0;
        cin>>val;
        vecDist.clear();
        while(val--){
            int tempo;
            cin>>tempo;
            vec.push_back(tempo);

            vecDist.push_back(tempo-prev);
            if(tempo-prev>sumDiff)
                sumDiff=tempo-prev;
            prev=tempo;
        }

        int low=0,high=1000000000,mid=0;
        for(int i=0;i<100;i++){
            mid=(high+low)/2;
            int hi=mid;
            for(int k=0;k<vecDist.size();k++){
                if(vecDist[k]==hi){
                    hi--;
                }
                else if(vecDist[k]>hi){
                    hi=-1;
                    break;
                }
            }

            if(hi>-1) high=mid;
            else low=mid+1;
        }
        cout<<"Case "<<j<<": "<<mid<<endl;
        //fp<<"Case "<<j<<": "<<mid;
		//fp<<"\n";
    }
    //fp.close();

}

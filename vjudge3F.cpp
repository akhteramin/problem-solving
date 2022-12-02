#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,test,tcase;
    scanf("%d",&tcase);
    for(int i=0;i<tcase;i++){
        scanf("%d %d",&n,&test);
        //cin>>n>>test;
        vector<int> vec;
        vector<int> ans;
        for(int k=0;k<n;k++){
            int vel;
            //cin>>vel;
            scanf("%d",&vel);
            vec.push_back(vel);
        }

        for(int l=0;l<test;l++){
            int rangeX,rangeY,rangeLo,rangeHigh,lo=0,high=n-1,mid;
            scanf("%d %d",&rangeX,&rangeY);
            if(rangeX<vec[lo] && rangeY<vec[lo]){
                //cout<<"0"<<endl;
                ans.push_back(0);
                continue;
            }
            if(rangeX>vec[n-1] && rangeY>vec[n-1]){
                //cout<<"0"<<endl;
                ans.push_back(0);
                continue;
            }
            while(high-lo>1){
                mid=(lo+high)/2;
                if(vec[mid]>=rangeX){
                    high=mid;
                }
                else if(vec[mid]<rangeX){
                    lo=mid+1;
                }
            }
            if(vec[lo]==rangeX) rangeLo=lo+1;
            else if(vec[lo]>rangeX && lo>1) rangeLo=lo;
            else if(vec[lo]>rangeX && lo<2) rangeLo=lo+1;

            else if(vec[high]==rangeX) rangeLo=high+1;
            else if(vec[high]>rangeX && high>1) rangeLo=high;
            else if(vec[high]>rangeX && high<2) rangeLo=high+1;
            else if(vec[high]<rangeX) rangeLo=high+1;
            else rangeLo=mid+1;

            lo=0,high=n-1;
            while(high>lo+1){
                mid=(lo+high)/2;
                if(vec[mid]>=rangeY){
                    high=mid;
                }
                else if(vec[mid]<rangeY){
                    lo=mid+1;
                }
            }
            if(vec[lo]==rangeY) rangeHigh=lo+1;
            else if(vec[lo]>rangeY && lo>1) rangeHigh=lo;
            else if(vec[lo]>rangeY && lo<2) rangeHigh=lo+1;

            else if(vec[high]==rangeY) rangeHigh=high+1;
            else if(vec[high]>rangeY && high>1) rangeHigh=high;
            else if(vec[high]>rangeY && high<2) rangeHigh=high+1;

            else if(vec[high]<rangeY) rangeHigh=high+1;
            else rangeHigh=mid+1;

            int valend=0,valstart=0;
            //cout<<"range lo"<<rangeLo<<" "<<rangeHigh<<endl;
            if(rangeX==rangeY){
                bool flag=false;
                for(int j=rangeLo-1;j<=rangeHigh-1;j++){
                    if(vec[j]==rangeX){
                        //cout<<"1"<<endl;
                        ans.push_back(1);
                        flag=true;
                        break;
                    }
                }
                if(!flag)
                    ans.push_back(0);
                    //cout<<"0"<<endl;
                continue;
            }
            for(int j=rangeLo-1;j<=rangeHigh-1;j++){
                if(vec[j]>=rangeX){
                    valstart=j;
                    break;
                }
            }
            for(int j=rangeHigh-1;j>=rangeLo-1;j--){
                if(vec[j]<=rangeY){
                    valend=j;
                    break;
                }
            }
            ans.push_back(valend-valstart+1);
        }
        printf("Case %d:\n",i+1);
        for(int m=0;m<ans.size();m++){
            printf("%d\n",ans[m]);
        }


    }
}

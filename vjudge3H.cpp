#include<bits/stdc++.h>
using namespace std;
int main(){
    float n,a,b,c,rat;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a>>b>>c>>rat;
        double s1=(a+b+c)/2.0;
        double area1=sqrt(s1*(s1-a)*(s1-b)*(s1-c));
        double area2=area1*rat/(rat+1);
        float lo=0,hi=a,mid=0;
        float a1,b1,c1;
        while(lo<hi){
            mid=(lo+hi)/2.0;
            a1=mid;
            b1=(a1*b/a)*1.0;
            c1=(a1*c/a)*1.0;
            double s2=(a1+b1+c1)/2.0;
            double area3=sqrt(s2*(s2-a1)*(s2-b1)*(s2-c1));

            if(area3<area2){
                lo=mid;
            }
            else if(area3>=area2){
                hi=mid;
            }
            if(abs(area2 - area3) < .0000079)
                break;
        }
        printf("Case %d: %.10f\n",i,mid);
        rat = rat/(rat+1);
        a1 = a*sqrt(rat);
        printf("Case %d: %lf\n",i,a1);

    }
}

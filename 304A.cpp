#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int per=0,count=0,k=0;
    double ans;
    cin>>per;
    for(int i=1;i<=per;i++)
    {
        for(int j=1;j<=per;j++)
        {
            k=pow(i,2)+pow(j,2);

            ans=sqrt(k);
            if(pow(ans,2)==k)
                cout<<i<<" "<<j<<" "<<ans<<endl;


        }
    }
    cout<<count/2;

}

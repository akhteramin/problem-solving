#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2;
    cin>>str1>>str2;
    int cnt=0,start=0;

    size_t pos = str1.find(str2, 0);
    while(pos != string::npos)
    {
        //cout<<pos<<endl;
        printf("%d\n",pos);
        pos = str1.find(str2,pos+1);
    }
    /*for(int i=0;i<str1.length();i++){
        if(str2[cnt]==str1[i]){
            if(cnt==0)
                start=i;
            cnt++;
            if(cnt==str2.length())
            {
                cnt=0;
                cout<<start<<endl;
                i=start;
            }
        }
        else{
            cnt=0;
        }
    }*/
}

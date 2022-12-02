#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > ans2;
vector<int> tmp;
string str1,str2;
bool flag=true;
void makeCombiUtil(int n, int left, int k)
{
    // Pushing this vector to a vector of vector
    if(!flag)
        return;
    if (k == 0) {
        ans2.push_back(tmp);
        for (int i = 0; i < ans2.size(); i++) {
            int cnt1=0,cnt2=0;
            int pos[n+1]={0};
            for (int j = 0; j < ans2[i].size(); j++) {
                //cout << ans[i][j] << " ";
                if(str1[ans2[i][j]-1]=='1')
                    cnt1++;
                pos[ans2[i][j]]=1;
            }
            for(int l=1;l<=n;l++){
                if(pos[l]!=1 && str2[l-1]=='1'){
                    cnt2++;
                }
            }
            if(cnt1==cnt2 && cnt1!=0)
            {
                flag=false;
                for (int j = 0; j < ans2[i].size(); j++) {
                    cout << ans2[i][j] << " ";
                }
                cout<<endl;
                return;
            }
        }
        ans2.pop_back();

    }

    // i iterates from left to n. First time
    // left will be 1
    for (int i = left; i <= n; ++i)
    {
        tmp.push_back(i);
        makeCombiUtil(n, i + 1, k - 1);

        // Popping out last inserted element
        // from the vector
        tmp.pop_back();
    }
}

// Prints all combinations of size k of numbers
// from 1 to n.
void makeCombi(int n, int k)
{
    makeCombiUtil(n, 1, k);
}
int main(){
     int n;
     cin>>n;

     cin>>str1>>str2;

    makeCombi(n, n/2);
    if(flag){
            cout<<"-1"<<endl;
        }


}

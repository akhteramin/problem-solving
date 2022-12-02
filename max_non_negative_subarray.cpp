#include<bits/stdc++.h>
using namespace std;
vector<int> maxset(vector<int> &vec) {
    vector< pair<int, long long> > ans;
    pair<int,int> index;

    int len=0,start=0,finish=-1;
    long long sum=0,temp_sum=0;
    for(int i=0;i<vec.size();i++){
        temp_sum=sum+vec[i];
        cout<<temp_sum<<endl;
        if(temp_sum<sum){
            if(ans.size()==0)
            {
                ans.push_back(make_pair(len,sum));
                index = make_pair(start,finish);
                cout<<len<<" "<<sum<<" "<<start<<" "<<finish<<endl;
            }
            else if(ans[0].second<sum){
                ans.clear();
                ans.push_back(make_pair(len,sum));
                index = make_pair(start,finish);
                cout<<len<<" "<<sum<<" "<<start<<" "<<finish<<endl;
            }
            else if(ans[0].second==sum && ans[0].first<len){
                ans.clear();
                ans.push_back(make_pair(len,sum));
                index = make_pair(start,finish);
                cout<<len<<" "<<sum<<" "<<start<<" "<<finish<<endl;

            }
            sum=0;
            temp_sum=0;
            start=i+1;
            finish=i;
            len=0;
        }
        else{
            sum=temp_sum;
            len++;
            finish++;
        }
    }
    if(ans.size()==0){
        ans.push_back(make_pair(len,sum));
        index = make_pair(start,finish);
        cout<<len<<" "<<sum<<" "<<start<<" "<<finish<<endl;
    }
    else if(ans[0].second<sum){
        ans.clear();
        ans.push_back(make_pair(len,sum));
        index = make_pair(start,finish);
        cout<<len<<" "<<sum<<" "<<start<<" "<<finish<<endl;
    }
    else if(ans[0].second==sum && ans[0].first<len){
        ans.clear();
        ans.push_back(make_pair(len,sum));
        index = make_pair(start,finish);
        cout<<len<<" "<<sum<<" "<<start<<" "<<finish<<endl;

    }
    cout<<ans[0].first<<" "<<ans[0].second<<" "<<index.first<<" "<<index.second<<endl;
    vector<int> ret;
    for(int i=index.first;i<=index.second;i++){
        ret.push_back(vec[i]);
    }
    return ret;
}
int main(){
    int arr[] = { 1967513926, 1540383426, -1303455736, -521595368 };
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> vec(arr, arr + n);

    vector<int> answer;
    answer=maxset(vec);
    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<" ";
    }
}

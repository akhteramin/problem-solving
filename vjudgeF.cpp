#include<bits/stdc++.h>
using namespace std;
vector<pair<int,char> > vec,arr;
vector<string>str_arr(10),comp_str(10),select_com(10);
void bubble(){
    for(int i=0;i<vec.size();i++){
        for(int j=vec.size()-1;j>i;j--){
            if(vec[j].first<vec[j-1].first){
                swap(vec[j],vec[j-1]);
            }
        }
    }
}
void selection(){
    int mini=0;
    for(int i = 0;i< arr.size();i++){
     mini = i;
     for(int j = i;j< arr.size();j++){
         if(arr[j].first < arr[mini].first)
             mini = j;
     }
     if(i!=mini){
        swap(arr[i],arr[mini]);
     }
    }
}
int main(){
    int n;
    cin>>n;
    while(n--){
        string temp;
        cin>>temp;
        str_arr[temp[1]-'0']+=temp[0];
        //cout<<str_arr[temp[1]-'0']<<endl;
        vec.push_back(make_pair(temp[1]-'0',temp[0]));
        arr.push_back(make_pair(temp[1]-'0',temp[0]));

    }
    bubble();
    selection();
    for(int i=0;i<vec.size();i++){
        comp_str[vec[i].first]+=vec[i].second;
        if(i==vec.size()-1)
            cout<<vec[i].second<<vec[i].first<<endl;
        else
            cout<<vec[i].second<<vec[i].first<<" ";
    }
    int k=0;
    for(;k<10;k++){
        if(str_arr[k]!=comp_str[k])
        {
            cout<<"Not stable"<<endl;
            break;
        }
    }
    if(k==10)
        cout<<"Stable"<<endl;
    for(int i=0;i<arr.size();i++){
        select_com[arr[i].first]+=arr[i].second;
        if(i==arr.size()-1)
            cout<<arr[i].second<<arr[i].first<<endl;
        else
            cout<<arr[i].second<<arr[i].first<<" ";
    }
    int l=0;
    for(;l<10;l++){
        if(str_arr[l]!=select_com[l])
        {
            cout<<"Not stable"<<endl;
            break;
        }
    }
    if(l==10)
        cout<<"Stable"<<endl;
}

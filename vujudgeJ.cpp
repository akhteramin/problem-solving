#include<bits/stdc++.h>
using namespace std;
vector<pair<int,string> > A;
map<int,string>str_arr, second_comp;
int Partition(int p, int r){
 int x = A[r].first;
 int i = p-1;
 for(int j = p; j<=r-1;j++){
     if(A[j].first <= x){
        i = i+1;
        swap(A[i],A[j]);
    }
 }
 swap(A[i+1],A[r]);
 return i+1;
}

void Quicksort(int p, int r){
 if(p < r)
    {
      int q = Partition(p, r);
      Quicksort(p, q-1);
      Quicksort(q+1, r);
    }
}
int main(){
    int n;
    cin>>n;
    while(n--){
        string card;
        int power;
        cin>>card>>power;
        A.push_back(make_pair(power,card));
        map<int,string>::iterator it;
        it = str_arr.find(power);
        if (it != str_arr.end())
            it->second+=card;
        else
            str_arr.insert(make_pair(power,card));

    }
    Quicksort(0,A.size()-1);
    /*for(map<int,string>::iterator itr=str_arr.begin();itr!=str_arr.end();++itr){
        cout<<itr->first<<" "<<itr->second<<endl;
    }*/
    for(int i=0;i<A.size();i++){

        map<int,string>::iterator it;
        it = second_comp.find(A[i].first);
        if (it != second_comp.end())
            it->second+=A[i].second;
        else
            second_comp.insert(make_pair(A[i].first,A[i].second));

        //cout<<A[i].first<<" "<<A[i].second<<endl;
    }
    map<int,string>::iterator itr2=second_comp.begin();
    for(map<int,string>::iterator itr=str_arr.begin();itr!=str_arr.end(),itr2!=second_comp.end();++itr,++itr2){
            if(itr->second!=itr2->second)
            {
                cout<<"Not stable"<<endl;
                break;
            }
    }
    if(itr2==second_comp.end())
        cout<<"Stable"<<endl;

    for(int i=0;i<A.size();i++){
        cout<<A[i].second<<" "<<A[i].first<<endl;
    }


}

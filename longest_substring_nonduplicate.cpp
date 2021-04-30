#include<iostream>
using namespace std;

int maxim = 0;
void recursion(int index, string s, int tempmax, int arr[300], int occurance_index[300], int count_seq){

    for(int i=0;i<300;i++){
        arr[i]=0;
        occurance_index[i]=-1;
    }
    if(tempmax>0){
        for(int i=index-tempmax+1;i<index;i++){
             arr[s[i]]++;
             occurance_index[s[i]] = i;
             count_seq++;
        }
    }
    for(int i=index;i<s.length();i++){
        arr[s[i]]++;
        if(arr[s[i]]>1)
        {
            maxim = max(maxim,count_seq);

             if(i-occurance_index[s[i]] <2){
                recursion(i,s,0,arr,occurance_index,0);
             }
             else{
                recursion(i,s,i-occurance_index[s[i]],arr,occurance_index,0);
             }
            return;

        }
        else{
            occurance_index[s[i]] = i;
            tempmax++;
            count_seq++;
            maxim = max(maxim,count_seq);
        }
    }

    return ;
}
int main()
{
    int arr[300] = {0};
    int occurance_index[300] = {-1};
    int count_seq = 0;
        string s;
        cin>>s;
         recursion(0,s,0,arr,occurance_index,count_seq);
        cout<<maxim<<endl;

}

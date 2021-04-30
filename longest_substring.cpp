#include<iostream>
#include <string>


using namespace std;
int arr[10001][10001]={0};

void recursion(string str,int index, int k,string temp_array[]){
    if(index==str.length()){
         for(int i=0;i<temp_array[index].size();i++)
        {
                cout<<temp_array[i]<<" ";
        }
        return;
    }


    for(int i=0;i<str.length();i++){

        // cout<<str.substr(min(i,index),max(i,index))<<endl;
        temp_array[index] += str[i];
        recursion(str,index+1,k,temp_array);
    }
    cout<<endl;
    return ;
}
int main()
{
    string str;
    int k;
    cin>>str>>k;
    string temp_array[str.length()];

    recursion(str,0,k,temp_array);

}

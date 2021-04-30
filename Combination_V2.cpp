#include<iostream>
#include<vector>
using namespace std;

void combination(string arr[8][5],string digits,int index, string temp_array[]){
        if(index == digits.size())
        {
            string temp;
            for(int i=0;i<digits.size();i++)
            {
                temp+=temp_array[i];
                cout<<temp_array[i]<<" ";
            }
            cout<<endl;
            return;
           // result.push_back(temp);
            //return result;

        }
        int digital = digits[index] - '0';
        for(int i=0;i<5;i++){
            if(arr[digital-2][i]=="")
                continue;
            temp_array[index] = arr[digital-2][i];
            combination(arr,digits,index+1,temp_array);
        }

    }
   int main() {
       string digits;
       cin>>digits;
        string arr[8][5] = {{"a","b","c"},{"d","e","f"},{"g","h","i"},{"j","k","l"},
                {"m","n","o"},{"p","q","r","s"},{"t","u","v"},{"w","x","y","z"}};
        vector<string> result;
        /*if(digits.size()==0)
            return result;
        else if(digits.size()==1)
        {
            int digital = digits[0] - '0';

            for(int i=0;i<(sizeof(arr[digital-2])/sizeof(*arr[digital-2]));i++)
            {
                if(arr[digital-2][i]!="")
                    result.push_back(arr[digital-2][i]);
            }
            return result;
        }*/
        cout<<digits.size()<<endl;
        string temp_array[digits.size()];
        int index = 0;
       combination(arr,digits,index,temp_array);

    }

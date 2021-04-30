#include<iostream>
#include<vector>
#include<string>
#include <iterator>
using namespace std;
string build_string(vector<string>& words, int maxWidth,int currLen){

        string resultStr="";
        int space_remain = maxWidth-currLen;
        if(words.size()==1)
        {
            resultStr=words[0];
            for(int j=0;j<space_remain;j++)
                resultStr+=" ";
            return resultStr;
        }
        int space_even_distribution = space_remain/(words.size()-1);
        int space_uneven_distribution = space_remain%(words.size()-1);
        for(int i=0;i<words.size();i++){
            resultStr+=words[i];
            if(i!=words.size()-1){

                for(int j=0;j<space_even_distribution;j++)
                    resultStr+=" ";
                if(i+1<=space_uneven_distribution)
                    resultStr+=" ";
            }

        }


        return resultStr;
    }
vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> result;
        int curr_len=0;
        vector<string> current_sent;
        for(int i=0;i<words.size();i++){
            curr_len+=words[i].length();
            cout<<words[i]<<" "<<curr_len<<endl;
            if(curr_len+current_sent.size()>maxWidth){

                result.push_back(build_string(current_sent,maxWidth,curr_len-words[i].length()));
                current_sent.clear();
                curr_len=words[i].length();
            }
            current_sent.push_back(words[i]);

        }
        string resultStr="";
        for(int i=0;i<current_sent.size();i++){
            resultStr+=current_sent[i];

            if(resultStr.length()<maxWidth)
                resultStr+=" ";

        }

        if(maxWidth-resultStr.length()>0){
            while(resultStr.length()!=maxWidth)
                resultStr+=" ";
        }
        result.push_back(resultStr);
        return result;

    }
int main(){
    vector<string> word_inp;
    word_inp.push_back("ask");
    word_inp.push_back("not");
    word_inp.push_back("what");
    word_inp.push_back("your");
    word_inp.push_back("country");
    word_inp.push_back("can");
    word_inp.push_back("do");
    word_inp.push_back( "for");
    word_inp.push_back("you");
    word_inp.push_back("ask");
    word_inp.push_back("what");
    word_inp.push_back("you");
    word_inp.push_back("can");
    word_inp.push_back("do");
    word_inp.push_back("for");
    word_inp.push_back("your");


    vector<string> result_data = fullJustify(word_inp,16);

    for(int i=0;i<result_data.size();i++){
        cout<<result_data[i]<< endl;
    }
    return 0;
}

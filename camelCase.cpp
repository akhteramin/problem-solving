#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>


using namespace std;
int main()
{

        char input[1001];
        int arr[27]={0};
        cin.getline(input,sizeof(input));
        for(int i=0;i<strlen(input);i++)
        {
            int alpha;
            if(input[i]!=' ')
            {
                if(input[i]-'a'<0)
                {
                    alpha=input[i]-'A'+1;
                }
                else
                {
                    alpha=input[i]-'a'+1;
                }
                arr[alpha]++;
            }
        }
        int pangram=1;
        for(int i=1;i<=26;i++)
        {
            if(arr[i]==0)
            {
                pangram=0;
                break;
            }
        }
        if(pangram)
        {
            cout<<"pangram"<<endl;
        }
        else
        {
            cout<<"not pangram"<<endl;
        }


        //cout<<strlen(input)<<endl;

return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <cstdlib>

using namespace std;
int main(){
    int quer,sum=0;
    string mat[501];
    cin>>quer;
    for(int i=0;i<quer;i++)
    {

        cin>>mat[i];
        //if(mat[i][j]=='X' && mat[i-1][j-1]=='X' && mat[i-1][j+1]=='X' && mat[i+1][j-1]=='X' && mat[i+1][j+1]=='X' )
          //  sum++;

    }
    for(int i=0;i<quer;i++)
    {
        for(int j=0;j<quer;j++)
        {
            //cout<<mat[i][j];
            if((i>0 && j>0) && (i<quer-1 && j<quer-1))
                if(mat[i][j]=='X' && mat[i-1][j-1]=='X' && mat[i-1][j+1]=='X' && mat[i+1][j-1]=='X' && mat[i+1][j+1]=='X' )
                    sum++;
        }
    }

    cout<<sum<<endl;
    return 0;

}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int arr[101]={0};
    int num_of_list;
    cin>>num_of_list;
    while(num_of_list--)
    {
        int temp;
        cin>>temp;
        arr[temp]++;
    }
    for(int i=0;i<=100;i++)
    {
        for(int j=0;j<arr[i];j++)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}


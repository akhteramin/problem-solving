#include<bits/stdc++.h>
using namespace std;
int coverPoints(vector<int> &A, vector<int> &B) {
    long long x=A[0],y=B[0],step=0,i=0;
    while(i<A.size()){

        step+=max(abs(x-A[i]),abs(y-B[i]));
        x=A[i];y=B[i];
        i++;

        cout<<x<<" "<<y<<endl;
    }
    return step;
}
int main(){
    int arr[] = { 4, 8, -7, -5, -13, 9, -7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> A(arr, arr + n);

    int arr1[] = { 4, -15, -10, -3, -13, 12, 8, -8 };
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    vector<int> B(arr1, arr1 + n1);
    int steps = coverPoints(A,B);
    cout<<steps<<endl;
}

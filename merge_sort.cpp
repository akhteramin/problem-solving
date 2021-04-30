#include<iostream>
using namespace std;

void mergeData(int arr[],int l,int m, int r){
    int n1=m-l+1;
    int n2=r-m;

    int L[n1],R[n2];
    for(auto i=0;i<n1;i++)
        L[i] = arr[l+i];
    for(auto i=0;i<n2;i++)
        R[i] = arr[m+1+i];

    int i=0, j=0,k=l;

    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of
    // R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

}

void mergesort(int arr[],int l,int r){
    if(l>=r)
        return;
     int m=l+(r-l)/2;
     mergesort(arr,l,m);
     mergesort(arr,m+1,r);
     mergeData(arr,l,m,r);

}

int main(){
    int arr[]= {12, 13, 11,10,9,8};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    mergesort(arr,0,arr_size);
    for(int i=0;i<arr_size;i++){
        cout<<arr[i]<<endl;
    }
}


#include<iostream>
using namespace std;


void combination(int arr[3][3],int index,int size_l,int temp_array[]){
    if(index==size_l)
    {
        for(int i=0;i<3;i++)
            cout<<temp_array[i]<<" ";
        cout<<endl;
        return;
    }
    for(int i=0;i<size_l;i++){
        temp_array[index] = arr[index][i];
        combination(arr,index+1,size_l,temp_array);
    }

}
int main()
{
	int arr[3][3] = {{1, 2, 3}, {4, 5,6},{7,8,9}};
    int temp_array[3];
	int size_l=3;
	int index=0,k=0;

    combination(arr,index,size_l,temp_array);

}

// This code is contributed by rathbhupendra

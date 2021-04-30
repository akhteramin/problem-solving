#include<iostream>
#include <math.h>
#include<vector>

using namespace std;
int getSum(int *tree, int lower, int upper, int start_p, int end_p, int position){
    if(end_p<=start_p)
    {
        return tree[position];
    }
    if(lower<=start_p && upper>=end_p)
        return tree[position];

     if(upper<start_p || lower>end_p)
        return 0;
    int mid = (start_p+end_p)/2;
    return getSum(tree,lower,upper,start_p,mid,2*position+1)+getSum(tree,lower,upper,mid+1,end_p,2*position+2);
}
int update_segment(vector<int> input, int *tree, int start_p, int end_p, int idx, int position, int value){

     if(start_p>=end_p)
    {
       tree[position] = tree[position]-value;
        //tree[position] = INT_MAX;
       //input[idx] = value;
        return tree[position];

    }
    int mid_v = (start_p+end_p)/2;
    //cout<<mid_v<<" "<<idx<<endl;
    if(idx<=mid_v)
         update_segment(input, tree, start_p, mid_v, idx, 2*position+1,value);
    else
         update_segment(input, tree, mid_v+1, end_p, idx, 2*position+2,value);

    tree[position] = tree[2*position+2]+tree[2*position+1];

    return tree[position];
}

int build_segment(vector<int> input, int *tree, int start_p, int end_p, int position){
    if(start_p>end_p)
        return 0;
    if(start_p==end_p)
    {
        tree[position] = 0;
        return  tree[position];
       //tree[position] = input[start_p];
        //return input[start_p];
    }
    int mid_v = start_p+(end_p-start_p)/2;
    //tree[position] = min(build_segment(input, tree, start_p, mid_v, 2*position+1), build_segment(input, tree, mid_v+1, end_p, 2*position+2));
    //tree[position] = build_segment(input, tree, start_p, mid_v, 2*position+1)+build_segment(input, tree, mid_v+1, end_p, 2*position+2);
    build_segment(input, tree, start_p, mid_v, 2*position+1);
    build_segment(input, tree, start_p, mid_v, 2*position+2);
    tree[position] = 0;
    //location[position] = 10*start_p+end_p;
    return tree[position];
}



int main(){
    vector<int> input;
    input.push_back(-1);
    input.push_back(3);
    input.push_back(4);
    input.push_back(0);
    input.push_back(2);
    input.push_back(1);
    int len = ceil(log2(input.size()));
    //int location[(int) pow(2, len)*2-1];
    int tree[(int) pow(2, len)*2-1];
    fill_n(tree,(int) pow(2, len)*2-1,INT_MAX);
    //fill_n(location,(int) pow(2, len)*2-1,INT_MAX);

    build_segment(input, tree, 0, input.size()-1,0);
    for(auto i=0;i<(int) pow(2, len)*2-1;i++){
        cout<<i<<" "<<tree[i]<<endl;
    }
    //int idx=0;
    //update_segment(input, tree, 0, input.size()-1, idx, 0, input[1]);
    //cout<<"End of first segment"<<endl;
    //for(auto i=0;i<(int) pow(2, len)*2-1;i++){
       // cout<<i<<" "<<tree[i]<<endl;
    //}
    //cout<<"query resposnse"<<endl;
    //cout<<getSum(tree,2,5,0,input.size()-1,0)<<endl;


}

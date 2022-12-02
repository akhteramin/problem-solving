#include<stdio.h>
int right[100]={0},left[100]={0};
void build_tree(int arr[],int position,int comparison_with_position){
    printf("value to compare:%d %d\n",arr[position],arr[comparison_with_position]);
    if(arr[position]>=arr[comparison_with_position])
    {
        if(right[comparison_with_position]==0)
        {
            right[comparison_with_position]=position;
            printf("%d's right is:%d\n",comparison_with_position,right[comparison_with_position]);
        }
        else
            build_tree(arr,position,right[comparison_with_position]);
    }
    else if(arr[position]<arr[comparison_with_position])
    {
        if(left[comparison_with_position]==0)
        {
            left[comparison_with_position]=position;
            printf("%1d's left is::%d\n",comparison_with_position,left[comparison_with_position]);
        }
        else
            build_tree(arr,position,left[comparison_with_position]);
    }
}
int searchTree(int arr[],int comparison_value,int comparison_with_position){
    if(comparison_value==arr[comparison_with_position])
    {
        return comparison_with_position;
    }
    else if(comparison_value>arr[comparison_with_position])
    {
        if(right[comparison_with_position]==0)
        {
            return 0;
        }
        searchTree(arr,comparison_value,right[comparison_with_position]);
    }
    else if(comparison_value<arr[comparison_with_position])
    {
        if(left[comparison_with_position]==0)
        {

            return 0;
        }
        searchTree(arr,comparison_value,left[comparison_with_position]);
    }
}
int main()
{
    int n,i=0;
    int arr[100]={0};
    int find=0;
    for(int i=0;i<100;i++)
    {
        arr[i]=0;
        right[i]=0;
        left[i]=0;
    }
    scanf("%d",&n);
    while(n--){
        scanf("%d",&arr[i]);
        if(i!=0)
        {
            build_tree(arr,i,0);
        }
        i++;

    }
    printf("find the value:");
    scanf("%d",&find);
    int found=searchTree(arr,find,0);
    if(found!=0)
    {
        printf("position:%d\n",found);

    }
    else{
        printf("no found.");
    }

}

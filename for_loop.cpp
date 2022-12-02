 #include<stdio.h>
int comparator(int a, int b){
    if(a>b)
        return 1;
    else return 0;
}
int main()
{
 int arr[4];
 scanf("%d",&arr[0]);
 scanf("%d",&arr[1]);
 int temp=comaprator(arr[0],arr[1]);
 if(temp==0)
    printf("arr[1] is bigger")
 else
    printf("arr[0] is bigger")

 return 0;
}

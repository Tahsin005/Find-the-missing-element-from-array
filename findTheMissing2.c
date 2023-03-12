#include<stdio.h>
/*Given an array conataining elements from 1 to 100 except
one element in this range is missing.Find the missing element*/
int main(){
    int arr[10]={1,2,3,4,5,6,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    int sum2;
    sum2=(10*(10+1))/2;

    int total_sum=sum2-sum;
    printf("Missing elements is %d", total_sum);
    return 0;
}
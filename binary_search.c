#include<stdio.h>
int binarysearch(int array[],int size,int target);
int low=0;
int high=size-1;
while(low<=high){
    int mid=low+(high-low)/2;
    if(array[mid]==target){
        return mid;
    }
    else if(array[mid]<target){
        low=mid+1;
    }
    else{
        high=mid-1;
    }
}
return -1;

int main(){
    int array={2,5,8,12,16,23,38,56,72,91};
    int size=sizeof(array)/sizeof(array[0]);
    int target;
    printf("Enter the element to search:");
    scanf("%d",&target);
    int result=binarysearch(array,size,target);
    if(result!=-1){
        printf("Element found at index %d\n",result);
    }
    else{
        printf("Element not found in the array.\n");
    }
    return 0;
    }

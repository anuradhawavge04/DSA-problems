#include<stdio.h>
#define MAXSIZE 10
void main()
{
    int array[MAXSIZE];
    int i,j,num,temp;
    printf("enter the value of num\n");
    scanf("%d",&num);
    printf("Enter the element one by one:\n");
    for(i=0;i<num;i++){
        scanf("%d",&array[i]);
    }
    printf("input array is\n");
    for(i=0;i<num;i++){
        printf("%d\n",array[i]);
    }
    for(i=0;i<num;i++){
        for(j=0;j<i-1;j++){
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }

    printf("sorted array is:\n");
    for(i=0;i<num;i++){
        printf("%d\n",array[i]);
    }
   
}
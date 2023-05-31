#include<stdio.h>

void swap(int arr[],int i,int j){
    int temp=arr[j];
    arr[j]=arr[i];
    arr[i]=temp;
}

void partition(int arr[],int low,int high){
    if (low>=high) return;
    int kunci=arr[low];
    int i=low+1,j=high;
    while(i<j){
        while (i<j && arr[j]>=kunci)
        {
            --j;
        }
        while(i<j && arr[i]<=kunci){
            ++i;
        }
        if (i<j){
            swap(arr,i,j);
        }
    }
    if (arr[low]>arr[i]){
        swap(arr,low,i);
        partition(arr,low,i-1);
        partition(arr,i+1,high);
    }
    else
    {
        partition(arr,low+1,high);
    }

}

void quickSort(int arr[],int size){
    partition(arr,0,size-1);
}

int main(){
    int data[]={1, 7, 4, 1, 10, 9, -2};
    int n=sizeof(data)/sizeof(data[0]);
    for (int i = 0; i < n; i++) {
        printf("%d", data[i]);
    }
    printf("\n");

    quickSort(data,n);
    for (int i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");


    return 0;
}
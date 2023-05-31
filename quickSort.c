#include<stdio.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int arr[],int left,int right){
    int pivot=arr[right];
    int kusor=(left-1);
    for(int i=left;i<right;i++){
        // percabangan
        if (arr[i]<=pivot){
            // apabila syarat ini terpenuh
            // kursor bertambah 1
            kusor++;
            // maka kusor dan index harus swapping
            swap(&arr[kusor],&arr[i]);

        }
    }
    swap(&arr[kusor+1],&arr[right]);
    return (kusor+1);
}

void quickSort(int arr[],int left, int right){
    if (left<right){
        int pi=partition(arr,left,right);
        // syarat terpenuhi kalau arraynya ke maka
        // kekanan di kurangin atau bahasa itu nya dimundurin

        quickSort(arr,left,pi-1);
        // setelah itu bagian kanannya dikurangin
        quickSort(arr,pi+1,right);
    }
}
int main(){
    int data[]={1, 7, 4, 1, 10, 9, -2};
    int n=sizeof(data)/sizeof(data[0]);
    for (int i = 0; i < n; i++) {
        printf("%d", data[i]);
    }
    printf("\n");

    quickSort(data,0,n-1);
    for (int i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");


    return 0;
}
#include<stdio.h>

void bubbleSort(int arr[],int n )
{
    // sorted from max to low
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-1;j++){
            if(arr[j]<arr[j+1]){
                int swapping=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=swapping;
            }
        }
    }
}
int main(){
    int data[3]={2,11,21};
    printf("data sebelum di sorting:");
    for (int i = 0; i < 3; i++) {
        printf("%d ", data[i]);
    }
    bubbleSort(data,3);
    printf("data sesudah di sorting");
    for (int i = 0; i < 3; i++) {
        printf("%d ", data[i]);
    }
    return 0;
}

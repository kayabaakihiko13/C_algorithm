#include<stdio.h>

float mean(int arr[],int n){
    int sum=0;
    for (int i=0; i <n;i++){
        sum+=arr[i];
    }
    float average = (float) sum/n;
    return average;
}

int main(){
    int data[]={2,3,5};
    int panjang_data=sizeof( data ) / sizeof( data[0] );
    printf("%f",mean(data,panjang_data));
    return 0;
}
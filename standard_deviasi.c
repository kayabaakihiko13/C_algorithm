#include <math.h>
#include <stdio.h>

float mean(int arr[],int size){
    int sum=0;
    for (int i=0;i<size;i++){
        sum+=arr[i];
    }
    float mean=(float) sum/size;
    return mean;
}

float standard_deviasion(int arr[],int size)
{
    float sum=0;
    for (int i = 0; i < size; i++) {
        float diff = arr[i] - mean(arr,size);
        sum += diff * diff;
    }
    float variasi=sum / size;
    double std=sqrt(variasi);
    return std;
}


int main(){
    int data[]={1,8,2};
    printf("%lf",standard_deviasion(data,3));
}
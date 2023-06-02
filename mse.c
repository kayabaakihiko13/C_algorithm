#include<stdio.h>
#include<stdlib.h>

float mse(float predict[],float true[],int n,int m){
    float sum=0.0;
    float result;
    if (n!=m){
        printf("jumlah datanya tidak sama\n");
    }
    for(int i=0;i<n;i++){
        float diff=true[i]-predict[i];
        diff*=diff;
        sum+=diff;
    }
    result=sum/n;
    return result;
}

int main(){
    float predict[] = {1.5, 5.1, 7.3, 7.7, 8.0, 3.9};
    float actual[] = {2.5, 3.4, 7.0, 7.4, 7.8, 3.9};
    int size_predict=sizeof(predict)/sizeof(predict[0]);
    int size_actual=sizeof(actual)/sizeof(predict[0]);
    printf("hasil dari MSE adalah :%f\n",mse(predict,actual,size_predict,size_actual));
}
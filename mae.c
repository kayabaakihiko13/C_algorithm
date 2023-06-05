#include<stdio.h>

float mae(float *predict,float *actual){
    int m=sizeof(predict)/sizeof(predict[0]);
    int n=sizeof(actual)/sizeof(actual[0]);
    
    float sum=0;
    for(int i=0;i<m;i++)
    {
        float dif= (predict[i]-actual[i]);
        if (dif<0){
            dif*=-1;
        }
        sum+=dif;
    }
    return sum/m;
}

int main(){
    float predict[] = {1.5, 2.1, 7.3, 7.7, 8.0, 3.9};
    float actual[] = {2.5, 2.4, 7.0, 7.0, 7.8, 3.9};
    printf("MAE:%f",mae(predict,actual));
    
}

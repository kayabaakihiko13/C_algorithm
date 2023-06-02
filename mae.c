#include<stdio.h>

float mae(float *predict,float *actual){
    int m=sizeof(predict)/sizeof(predict[0]);
    int n=sizeof(actual)/sizeof(actual[0]);
    
    float sum=0;
    for(int i=0;i<m;i++)
    {
        float dif= -(actual[i]-predict[i]);
        sum+=dif;    
    }
    return sum;
}

int main(){
    float predict[] = {1.5, 5.1, 7.3, 7.7, 8.0, 3.9};
    float actual[] = {2.5, 3.4, 7.0, 7.4, 7.8, 3.9};
    printf("MAE:%f",mae(predict,actual));
    
}

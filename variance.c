#include <stdio.h>

float variance(int *arr){
   int n=sizeof(arr)/sizeof(arr[0]);
   int sum=0;
   //calculate rata-rata
   for(int i=0;i<n;i++){
	sum+=arr[i];
   }
   float mean=(float)sum/n;
   // calculate variance
   float variance=0.0;
   for(int i=0;i<n;i++){
	float diff=(float)arr[i]-mean;
	diff*=diff;
	sum+=diff;
   {
   float variance/=n;
   return variance;
}


int main(){
	int data[]={1.2,3.2,2.3,2.3};
	printf("%f",variance(data));
}

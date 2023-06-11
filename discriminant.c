#include<stdio.h>
#include <stdbool.h>
#include <math.h>
void quadratic_formula(int a,int b,int c){
    if (a ==0){
        return;
    }else{
        float discriminant=(b*b)-(4*a*c);
        if (discriminant>0){
            float x1= (-b+sqrt(discriminant))/(2*a);
            float x2= (-b-sqrt(discriminant))/(2*a);
            printf("X1=%f\nX2=%f\n",x1,x2);
        }else if(discriminant ==0){
            printf("Hasil ini adalah %f",discriminant);
        }else{
            printf("persamaannya berimajiner");
        }
    }

    return;
}

int main(){
    // mari kita check
    quadratic_formula(1,6,2);
    return 0;
}




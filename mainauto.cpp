#include<cstdio>

/* Copyright (c) 2017-present, SakaraHiroya , MIT License */

int main(){
    int number,stunumber;
    float a[200];
    scanf("%d",&number);
    for(int i=0;i<number;i++){
        scanf("%f",&a[i]);
    }
    scanf("%d",&stunumber);
    for(int k=0;k<stunumber;k++){
        float b[200];
        float n=0,m=0;
        for(int i=0;i<number;i++){
            scanf("%f",&b[i]);
        }
        for(int j=0;j<number;j++){
            if(b[j]!=0){
                if(b[j]>=60){
                    n = n + ((b[j]/10 - 5)*a[j]);
                }
                m = m + a[j];
            }
        }
        // printf("%.4f %.4f\n",n,m); //if you need total number of statistics courses
        printf("%.4f\n",n/m);
    }
    return 0;
}
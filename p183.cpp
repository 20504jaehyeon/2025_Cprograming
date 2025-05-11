#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int n=50000, d[50001];
int main(){
    int i, j,t;
    srand((unsigned int)time(NULL));
    for(i=1;i<=n;i++){
        d[i]=rand()%n+1;
    }
    for(i=1;i<n-1;i++){
        min=i;
        for(j=i+1;j<=n;j++){
            if(d[j]<d[min]){
                min=j;
            }
            t=d[i];
            d[i]=d[min];
            d[min]=t;
        }
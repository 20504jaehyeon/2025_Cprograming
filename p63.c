// gcc p63.c -o p63.exe
#include<stdio.h>
int main(){
    int n, i;
    scanf("%d",&n);
    i=2;
    do{
        if(n%i==0){
            printf("%d   ",i);
            n=n/i;
        }
        else{
            i++;
        }

    }while(i<=n);
    printf("\n");
    return 0;
}
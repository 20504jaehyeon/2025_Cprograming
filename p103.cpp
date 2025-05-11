#include<stdio.h>
int n;
void f(){
    printf("*\n");
    return ;
}
int main(){
    scanf("%d",&n);
    for(int i=1; i<=n;i++){
        f();
    }
}
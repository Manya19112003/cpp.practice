
#include<stdio.h>
int main(){
    int n;
    printf("enter value of n");
    scanf("%d",&n);
    if(n==0){
        printf("its zero");
    }else if(n>0){
        printf("its positive");
    }else{
        printf("its negative");
    }return 0;
}

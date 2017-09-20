#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    int n,p;
    for(n=1;n<=2;n++){
        
        int p = rand() % 2;
        if(p != 0){
            printf("100\n");
        }
        else{
            printf("0\n");
        }
        
    }return 0;
}
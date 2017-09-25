#include<stdio.h>

int swap(int a, int b){
    int i = 0;
    i = a;
    a = b;
    b = i;
    printf("%d %d\n",a,b);  
}

int main(){
    swap(4,5);
    swap(7,8);
}
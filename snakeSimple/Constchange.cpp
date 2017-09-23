#include<iostream>
#include<typeinfo>
using namespace std;

int main(){
    const int a = 24;
    int b = 0;

    b = a;
    
    cout<<b<<endl;

    b = 30;
    const int c = b;

    cout<<b<<endl;
    cout<<c<<endl;
}
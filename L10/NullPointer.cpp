#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int b;
    int* p = &a;
    int* q = &b;
    cout<<a<<endl;
    cout<<*p<<endl;
    cout<<b<<endl;
    cout<<*q<<endl;
    return 0;
}
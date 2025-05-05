#include<iostream>
using namespace std;
int main(){
    int a = 5, b= 6;
    int *p = &a, *q = &b;
    cout<<"Value of a: "<<a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;//Derefarencing
    return 0;
}
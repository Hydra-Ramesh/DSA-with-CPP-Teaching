#include<iostream>
using namespace std;
int main(){
    int a = 5;
    a++;
    int* p = &a;
    *p = *p+1;
    cout<<*p<<endl;
    *p = *p-2;
    cout<<a<<endl;
    return 0;
}
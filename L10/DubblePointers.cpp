#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int* p = &x;
    cout<<p<<endl;
    int** q = &p;
    int*** r = &q;
    cout<<q<<endl;
    cout<<r<<endl;
    return 0;
}
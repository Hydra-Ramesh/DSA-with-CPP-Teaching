#include<iostream>
using namespace std;
void swap(int* a,int* b){ //Both are diffrent Variable
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a=5, b=10;
    cout<<"Before Swapping: a="<<a<<" b="<<b<<endl;
    swap(&a,&b);
    cout<<"After Swapping: a="<<a<<" b="<<b<<endl;
    return 0;
}
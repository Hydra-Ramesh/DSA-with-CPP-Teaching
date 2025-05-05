#include<iostream>
using namespace std;
int main(){
    //In C++ String is mutable but in Java String is immutable.
    string str = "Ram";
    cout<<"The String is: "<<str<<endl;
    str[0]='B';
    cout<<"The Updated String is: "<<str<<endl;
    return 0;
}
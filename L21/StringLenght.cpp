#include<iostream>
using namespace std;
int main(){
    string str= "Ramesh";
    cout<<"Length of string is: "<<str.length()<<endl;
    str.push_back('a');
    cout<<"Length of string is: "<<str.length()<<endl;
    cout<<str;
    str.pop_back();
    cout<<"Length of string is: "<<str.length()<<endl;
    cout<<str;
    return 0;

}
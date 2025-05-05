#include<iostream>
using namespace std;
int main(){
    char str[100]={'r','a','m'};
    cout<<"The String is: ";
    for(int i=0;i<3;i++){
        cout<<str[i];
    }
    cout<<endl;
    str[0]='b';
    cout<<"The Updated String is: ";
    for(int i=0;i<3;i++){
        cout<<str[i];
    }
}
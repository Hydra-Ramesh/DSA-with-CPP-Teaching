#include<iostream>
using namespace std;
int main(){
    string company_name = "Google";//Zero Based Indexing
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Hello "<<name<<"! Welcome to "<<company_name<<endl;
    cout<<endl;
    cout<<company_name[6];
    return 0;
}
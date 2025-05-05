#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    int n = s.length();
    int position = n/2;
    reverse(s.begin()+position,s.end());
    cout<<s;
    return 0;
}
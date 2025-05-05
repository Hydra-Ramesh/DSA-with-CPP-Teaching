#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of the String: ";
    cin>>n;
    char str[n];
    cout<<"Enter the String: ";
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    cout<<"The Vowels in the String are: ";
    for(int i=0;i<n;i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            cout<<str[i]<<" ";
        }
    }
    return 0;
}
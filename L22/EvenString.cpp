#include<iostream>
using namespace std;
int main(){
    string s = "Sneha Patra";
    int len = s.length();
    for(int i = 0;i<len;i++){
        if(i%2==0){
            s[i]='a';
        }
    }
    cout<<s;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int arr[5]={3,4,6,2,4};
    int count=0;
    int x = 3;
    for(int i=0;i<5;i++){
        if(arr[i]>x){
            count++;
        }
    }
    cout<<count;
}
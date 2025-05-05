#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr;
    vector<int>brr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);
    //Printing the arr
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //Copy the arr to brr in Reverse Order
    for(int i = 0; i<=arr.size(); i++){
        brr.push_back(arr[arr.size()-i-1]);
    }
    //Printing the brr
    for(int i=0; i<brr.size(); i++){
        cout<<brr[i]<<" ";
    }
    
}
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
    reverse(arr.begin()+3, arr.end());
    cout<<endl;
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    
}
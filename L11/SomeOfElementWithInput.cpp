#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Size of Array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    cout<<"The Sum of Element of Array is :"<<sum;
    return 0;
}
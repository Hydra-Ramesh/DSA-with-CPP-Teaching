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
    int max =0;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"The Maximum value is : "<<max;

    int smax = 0;
    for(int i=0;i<n;i++){
        if(arr[i]!=max && arr[i]>smax){
            smax=arr[i];
        }
    }
    cout<<"Second Max is : "<<smax;
    return 0;
}
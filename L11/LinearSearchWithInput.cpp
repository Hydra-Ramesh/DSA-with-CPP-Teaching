#include<iostream>
using namespace std;
int main(){
    int n,x;
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
    cout<<"Enter the value of X: ";
    cin>>x;
    bool flag = false;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            flag = true;
            break;
        }
    }
    if(flag == false){
        cout<<"No";
    }else{
        cout<<"Yes";
    }
    return 0;
}
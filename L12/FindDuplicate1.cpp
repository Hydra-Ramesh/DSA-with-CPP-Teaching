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
    bool flag = false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<"Duplicate Element Found: "<<arr[i]<<endl;
                flag = true;
                break;
            }
        }
    }
    if(flag == false){
        cout<<"No Duplicate Element Found";
    }
    return 0;
    

}
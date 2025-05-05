#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter The Number of Rows :";
    cin>>m;
    cout<<"Enter The Number of Columns :";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
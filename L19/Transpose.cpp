#include<iostream>
using namespace std;
int main(){
    int n, m;
    cout<<"Enter the number of rows: ";
    cin>>n;
    cout<<"Enter the number of columns: ";
    cin>>m;
    int arr[n][m];
    int brr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The matrix is: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            brr[j][i]=arr[i][j];
        }
    }
    cout<<"Transpose of the matrix is: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
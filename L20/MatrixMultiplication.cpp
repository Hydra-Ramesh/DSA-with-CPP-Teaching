#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int brr[3][3]={1,2,3,4,5,6,7,8,9};

    int res[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            res[i][j]=0;
            for(int r=0;r<3;r++){
                res[i][j]+=arr[i][r]*brr[r][j];
            }
        }
    }
    //Printing the resultant matrix
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}
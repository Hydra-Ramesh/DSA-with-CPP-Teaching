#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n-1; i++) {//=> n
        //Every Pass
        for (int j = 0; j < n - i - 1; j++) { //=> for every i here have n time ittration n*n   
            // Compare adjacent elements
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
// Time Complexity: O(n^2)

void selectionSort(vector<int>& arr){
    int n = arr.size();
    for(int i=0;i<n-1;i++){
        int min = INT_MAX;
        int minIndex = -1;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}
int main(){
    vector<int>v{5,4,3,2,1};
    int n = v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    bubbleSort(v);
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
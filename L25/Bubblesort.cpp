#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n-1; i++) {
        //Every Pass
        for (int j = 0; j < n - i - 1; j++) {
            // Compare adjacent elements
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
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
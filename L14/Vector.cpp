#include<iostream>
#include<vector>
using namespace std;
int main(){
    // int arr[5] = {1,2,3,4,5};
    vector<int>brr;
    brr.push_back(1);
    brr.push_back(2);
    brr.pop_back();
    brr.push_back(3);
    brr.push_back(4);
    brr.push_back(5);

    cout<<brr.size()<<endl;
    cout<<brr[2]<<endl;
    int n = brr.size();
    for(int i=0;i<n;i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
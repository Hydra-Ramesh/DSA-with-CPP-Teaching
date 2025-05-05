#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result;
    for(int i=0; i<nums.size(); i++){
        for(int j=i+1; j<nums.size(); j++){
            if(nums[i] + nums[j] == target){
                result.push_back(i);
                result.push_back(j);
                break;
            }
        }
    }
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}

---

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
We need to move all zeroes in the array to the end while maintaining the relative order of the non-zero elements. A simple idea is to first collect all non-zero elements and then fill the remaining part of the array with zeroes.

# Approach
<!-- Describe your approach to solving the problem. -->
1. Traverse the array and push all non-zero elements into a new vector `ans`.
2. Copy the elements from `ans` back into the original array.
3. From the end of `ans` to the end of the original array, fill in zeroes.

This maintains the original order of non-zero elements and moves all zeroes to the end.

# Complexity
- Time complexity:  
  $$O(n)$$ — We go through the array multiple times, but each pass is linear.

- Space complexity:  
  $$O(n)$$ — We use an extra array (`ans`) to store the non-zero elements.

# Code
```cpp
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                ans.push_back(nums[i]);
            }      
        }
        for (int i = 0; i < ans.size(); i++) {
            nums[i] = ans[i];
        }
        for (int i = ans.size(); i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};
```

---

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
First, take two elements from the array and check if their sum equals the target. If it does, return their indices.

# Approach
<!-- Describe your approach to solving the problem. -->
We use a brute-force approach by iterating through each pair of elements in the array using nested loops. For each pair `(i, j)` where `i < j`, we check if `nums[i] + nums[j] == target`. If it is, we store the indices `i` and `j` in the answer vector and return it.

# Complexity
- Time complexity:  
  $$O(n^2)$$  
  We check every pair of elements in the array, so for an array of size `n`, this requires roughly `n(n-1)/2` comparisons in the worst case.

- Space complexity:  
  $$O(1)$$  
  Aside from the output vector (which always holds exactly two indices), we use a constant amount of additional space.

# Code
```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    ans.push_back(i);
                    ans.push_back(j);
                    break; 
                }
            }
        }
        return ans;
    }
};
```
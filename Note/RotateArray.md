
---

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
To rotate an array to the right by `k` steps, one intuitive idea is to use the reverse operation to rearrange the elements efficiently. Instead of shifting elements one by one, we can reverse parts of the array to achieve the desired rotation in linear time.

# Approach
<!-- Describe your approach to solving the problem. -->
1. First, handle the case where `k` is greater than the size of the array by taking `k = k % n` (since rotating `n` times brings the array back to its original state).
2. Reverse the entire array.
3. Reverse the first `k` elements.
4. Reverse the remaining `n - k` elements.

This effectively rotates the array to the right by `k` steps.

**Example:**  
Original array: `[1, 2, 3, 4, 5, 6, 7]`, `k = 3`  
Step 1: Reverse all → `[7, 6, 5, 4, 3, 2, 1]`  
Step 2: Reverse first 3 → `[5, 6, 7, 4, 3, 2, 1]`  
Step 3: Reverse last 4 → `[5, 6, 7, 1, 2, 3, 4]` (rotated)

# Complexity
- Time complexity:  
  $$O(n)$$  
  We perform three reverse operations, each of which takes linear time.

- Space complexity:  
  $$O(1)$$  
  We perform the operations in-place without using any extra space.

# Code
```cpp
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (k >= n) {
            k = k % n;
        }
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};
```

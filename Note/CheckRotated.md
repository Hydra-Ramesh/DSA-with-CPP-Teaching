
---

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
We are given a rotated sorted array and need to check if it's a valid rotation of a non-decreasing sorted array.  
A valid rotated sorted array can have **at most one point** where an element is greater than its next (i.e., a "drop" in the sequence). If there is more than one such point, it's not a valid rotation of a sorted array.

# Approach
<!-- Describe your approach to solving the problem. -->
1. Iterate through the array.
2. For each index `i`, compare `nums[i]` with `nums[(i + 1) % n]` (using modulo to wrap around the end).
3. If `nums[i] > nums[(i + 1) % n]`, increment a counter `count`.
4. At the end, if `count > 1`, return `false`. Otherwise, return `true`.

Why this works:
- A sorted (non-rotated) array will have `count == 0`.
- A rotated sorted array will have `count == 1`.
- More than one such drop means the array is not a rotated sorted version of a non-decreasing array.

# Complexity
- Time complexity:  
  $$O(n)$$  
  We traverse the array once.

- Space complexity:  
  $$O(1)$$  
  No extra space is used.

# Code
```cpp
class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }
        return count <= 1;
    }
};
```

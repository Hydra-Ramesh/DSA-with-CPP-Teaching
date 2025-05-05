
---

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Since the array only contains 0s, 1s, and 2s, we can sort it by comparing every pair of elements and swapping them if they are out of order. This is a straightforward brute-force way to solve the problem.

# Approach
<!-- Describe your approach to solving the problem. -->
Use two nested loops:
- Outer loop iterates through the array.
- Inner loop compares the current element with every other element after it.
- If an element is smaller than the current one, swap them.

This is similar to a selection sort or bubble sort approach and ensures all elements are placed in correct order by the end.

# Complexity
- Time complexity:  
  $$O(n^2)$$ — two nested loops over the array.

- Space complexity:  
  $$O(1)$$ — no extra space used; sorting is done in-place.

# Code
```cpp
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] > nums[j]) {
                    swap(nums[i], nums[j]);
                }
            }
        }
    }
};
```
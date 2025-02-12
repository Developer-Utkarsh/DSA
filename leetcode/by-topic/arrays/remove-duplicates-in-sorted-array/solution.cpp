/**
 * LeetCode #26 - Remove Duplicates from Sorted Array
 * Difficulty: Easy
 * 
 * Approach: Two Pointer Technique
 * - Use two pointers to track unique elements and current position
 * - Since array is sorted, duplicates will be adjacent
 * - In-place modification to save space
 * 
 * Time: O(n) - Single pass through array
 * Space: O(1) - In-place modification
 */
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Two Pointer Approach
        int uniquePtr = 0;  // Points to last unique element
        int currentPtr = 0; // Scans through array
        
        while(currentPtr < nums.size()) {
            // When we find a new unique element
            if(nums[uniquePtr] != nums[currentPtr]) {
                uniquePtr++;  // Move unique pointer forward
                nums[uniquePtr] = nums[currentPtr];  // Place new unique element
            }
            currentPtr++;  // Always move current pointer forward
        }
        
        return uniquePtr + 1;  // Length is 1 more than last index
    }
};

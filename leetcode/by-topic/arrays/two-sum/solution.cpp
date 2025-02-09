/**
 * LeetCode #1 - Two Sum
 * Difficulty: Easy
 * 
 * Problem: Given an array of integers nums and an integer target,
 * return indices of two numbers that add up to target.
 * 
 * Approach: Brute Force
 * - Use nested loops to check every possible pair of numbers
 * - For each number, check all numbers after it
 * - When sum equals target, return the indices
 * 
 * Time Complexity: O(n²) where n is the length of array
 * Space Complexity: O(1) as we only use constant extra space
 */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int items = nums.size();
        
        // Outer loop: iterate through each number
        for (int i = 0; i < items; i++) {
            int no1 = nums[i];  // First number in the pair
            
            // Inner loop: check all numbers after nums[i]
            // Start from i+1 to avoid using same element twice
            for (int j = i + 1; j < items; j++) {
                int no2 = nums[j];  // Second number in the pair
                
                // If current pair sums to target, we found our answer
                if (no1 + no2 == target) {
                    return {i, j};  // Return indices as vector
                }
            }
        }
        
        // If no solution found, return empty vector
        // (Problem guarantees a solution exists, so this won't be reached)
        return {};
    }
};

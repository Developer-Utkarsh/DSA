/**
 * LeetCode #136 - Single Number
 * 
 * Approach: Using XOR Operation
 * Time Complexity: O(n) - Single pass through array
 * Space Complexity: O(1) - Only using one variable
 * 
 * Key Properties of XOR used:
 * 1. a ^ a = 0 (XOR of a number with itself is 0)
 * 2. a ^ 0 = a (XOR of a number with 0 is the number itself)
 * 3. a ^ b ^ a = b (XOR is associative and pairs cancel out)
 */
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // Initialize result to 0 (XOR with 0 gives number itself)
        int ans = 0;
        
        // XOR all numbers in the array
        for(int value : nums) {
            ans = ans ^ value;  // All pairs will cancel out, leaving the single number
        }
        
        return ans;  // Return the number that appears only once
    }
};
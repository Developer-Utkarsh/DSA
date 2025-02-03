#include <iostream>
#include <vector>
using namespace std;


// Linear Search Using Vectors
// Time Complexity: O(n) where n is the size of vector
// Space Complexity: O(1)
    int linearSearch(vector<int> nums, int target){
        int index = 0;
        for(int val : nums){  // Using range-based for loop for cleaner iteration
            if(val == target){
                return index;
            }
            index++;
        }
        return 0;  // Returns 0 if element not found
    };

// Reverse Vector using Two-Pointer Technique
// Time Complexity: O(n/2) ≈ O(n) where n is the size of vector
// Space Complexity: O(1) as we're doing in-place reversal
    void reverseVector(vector<int>& nums){
        // Two Pointer Approach
        int start = 0;
        int end = nums.size() - 1;

        while(end > start){
            swap(nums[start], nums[end]);  // Built-in swap function
            start++;
            end--;
        }
    }

int main(){
    vector<int> vec = {1,2,3,4,5};  // Vector initialization with initializer list
    vector<int> vec1(5,0);          // Vector of size 5 initialized with 0s
    
    // Example of vector operations (commented for reference)
    // cout << vec[0] << endl;
    
    cout << "size = " << vec.size() << endl;

    // vec.push_back(23);
    // vec.pop_back(); // 23 Removed
    // for(int value : vec){
    //     cout << value << endl;
    // }
    // vec.push_back(3);
    cout << "capacity: " << vec.capacity() << endl;
    // cout << vec.front() << endl; // Front values
    // cout << vec.back() << endl; // Back values
    // cout << vec.at(2) << endl; // Value at 2 index
    
    cout << linearSearch(vec,3) << endl;
     reverseVector(vec);
    for(int value : vec){
        cout << value << endl;
    }
    return 0;
}
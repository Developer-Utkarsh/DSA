#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Function to print a subarray
void printSubarray(int arr[], int start, int end) {
    for(int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to generate and print all subarrays
void generateSubarrays(int arr[], int n) {
    // TODO: Implement this function to print all possible subarrays
}

// Brute force approach to find maximum subarray sum
int maxSubarraySumBruteForce(int arr[], int n) {
    // TODO: Implement brute force approach
    return 0;
}

// Kadane's Algorithm
int kadanesAlgorithm(int arr[], int n) {
    // TODO: Implement Kadane's algorithm
    return 0;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n\n";

    cout << "All Subarrays:" << endl;
    generateSubarrays(arr, n);
    cout << "\n";
    cout << "Maximum Subarray Sum (Brute Force): ";
    cout << maxSubarraySumBruteForce(arr, n) << endl;
    cout << "Maximum Subarray Sum (Kadan's Algorithm): ";
    cout << kadanesAlgorithm(arr, n) << endl;
    
    return 0;
}
